
void FUN_003d2898(uint *param_1,undefined1 *param_2,undefined1 *param_3,byte param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0) {
    *param_2 = 0x7f;
    if (param_4 != 0) {
      memset(param_3,0,(ulong)param_4);
      return;
    }
  }
  else {
    puVar1 = (undefined1 *)
             ((long)param_1 +
             (ulong)param_1[((ulong)uVar2 & 1) + ((ulong)(uVar2 >> 1) & 1) +
                            ((ulong)(uVar2 >> 2) & 1) + ((ulong)(uVar2 >> 3) & 1) +
                            ((ulong)(uVar2 >> 4) & 1) + ((ulong)(uVar2 >> 5) & 1) +
                            ((ulong)(uVar2 >> 6) & 1) + ((ulong)(uVar2 >> 7) & 1) + 1]);
    *param_2 = *puVar1;
    bVar3 = puVar1[1];
    if (2 < bVar3) {
      bVar3 = 3;
    }
    if (((bVar3 != 0) && (*param_3 = puVar1[2], bVar3 != 1)) && (param_3[1] = puVar1[3], bVar3 != 2)
       ) {
      param_3[2] = puVar1[4];
    }
  }
  return;
}

