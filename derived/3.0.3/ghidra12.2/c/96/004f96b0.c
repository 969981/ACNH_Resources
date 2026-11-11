
void _INIT_410(void)

{
  if ((DAT_04c72560 & 1) == 0) {
    DAT_04c72550 = 0;
    DAT_04c72558 = 0;
    DAT_04c72560 = 1;
  }
  return;
}

