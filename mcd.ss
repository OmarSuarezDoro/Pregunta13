(define (mcd a b)
  (if (= b 0)
      a
      (mcd b (remainder a b))))
