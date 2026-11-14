
void FUN_01704540(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 local_24;
  
  (**(code **)(*param_1 + 0x590))();
  FUN_0172e26c(param_1 + 0x286);
  FUN_01739a4c(param_1 + 0x289);
  FUN_017025a0(param_1);
  if (param_1[0x227] == 0) {
    puVar7 = &DAT_04c931a0;
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
  }
  local_24 = *(undefined4 *)(puVar7 + 0xb);
  puVar6 = (uint *)FUN_0171ec68(&local_24);
  puVar5 = PTR_DAT_04bbde90;
  puVar4 = PTR_DAT_04bbde88;
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
LAB_01704700:
    bVar9 = 0;
  }
  else {
    cVar8 = *PTR_DAT_04bbde88;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x2c);
        if (-1 < (int)uVar3) {
          if ((ulong)uVar3 + (long)puVar6 == 0) goto LAB_01704700;
          bVar9 = *(byte *)((ulong)uVar3 + (long)puVar6 + 1) >> 3 & 1;
          goto LAB_01704704;
        }
        if (uVar3 != 0xffffffff) goto LAB_01704700;
      }
      puVar11 = (uint *)(ulong)*puVar6;
      bVar9 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_01704704;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) goto LAB_01704700;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      bVar9 = 0;
      if (uVar10 == 0) goto LAB_01704704;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != 0x42ad246a) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar9 = 0;
          goto LAB_01704704;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar5 + 0x2c) = iVar1;
    } while (*puVar6 != 0);
    bVar9 = 0;
  }
LAB_01704704:
  *(byte *)((long)param_1 + 0x11c2) = bVar9;
  return;
}

