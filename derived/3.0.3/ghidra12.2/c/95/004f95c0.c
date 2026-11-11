
void _INIT_408(void)

{
  if ((DAT_04c72510 & 1) == 0) {
    DAT_04c72500 = 0;
    DAT_04c72508 = 0;
    DAT_04c72510 = 1;
  }
  return;
}

