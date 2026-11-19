
undefined8 FUN_03b46140(float param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  
  cVar2 = DAT_05aebc00;
  if (param_1 < 0.0) {
    return 0;
  }
  if (2 < *(int *)(param_2 + 0xc)) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0x120) + 8);
  puVar1 = *(undefined8 **)(lVar3 + 0x38);
  if (DAT_05aebc00 != '\0') {
    puVar1 = (undefined8 *)(lVar3 + 0x70);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  fVar6 = 0.0;
  if (((((puVar1[1] != 0) && (*(char *)(puVar1[1] + 0x30) != '\0')) &&
       (piVar4 = (int *)*puVar1, piVar4 != (int *)0x0)) &&
      ((*piVar4 == 0x56415742 &&
       (((char)(*(ushort *)(piVar4 + 1) >> 8) != -1 || ((*(ushort *)(piVar4 + 1) & 0xff) != 0xfe))))
      )) && ((*(short *)((long)piVar4 + 6) == 1 && (*(short *)((long)piVar4 + 0xe) != 0)))) {
    fVar6 = (float)NEON_ucvtf(piVar4[5]);
  }
  if (2 < *(int *)(param_2 + 0xc)) {
    return 0;
  }
  iVar5 = (int)(fVar6 * param_1);
  if (iVar5 < 0) {
    return 0;
  }
  *(int *)(param_2 + 0x28) = iVar5;
  lVar3 = *(long *)(*(long *)(param_2 + 0x120) + 8);
  if (cVar2 == '\0') {
    piVar4 = (int *)(lVar3 + 0x18);
  }
  else {
    if (*(char *)(lVar3 + 0x58) == '\0') {
      return 1;
    }
    piVar4 = (int *)(lVar3 + 0x60);
  }
  *piVar4 = iVar5;
  return 1;
}

