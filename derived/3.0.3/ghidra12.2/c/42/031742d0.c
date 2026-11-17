
undefined8 FUN_031742d0(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  short *psVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  lVar1 = param_1 + 0x1f8;
  bVar2 = *(byte *)(param_1 + 0x1c514);
  iVar4 = FUN_02672e00(lVar1);
  if (iVar4 <= (char)bVar2 || 0x7f < bVar2) {
    bVar2 = 0xff;
  }
  if (bVar2 < 0x28) {
    puVar6 = (undefined2 *)FUN_02677ea0(lVar1);
  }
  else {
    puVar6 = &DAT_05586008;
  }
  local_48 = *puVar6;
  local_46 = *(undefined1 *)(puVar6 + 1);
  local_45 = *(undefined1 *)((long)puVar6 + 3);
  local_44 = *(undefined4 *)(puVar6 + 2);
  bVar2 = *(byte *)(param_1 + 0x1c514);
  if (0x27 < bVar2) {
    bVar2 = 0xff;
  }
  local_4c = (int)(char)bVar2;
  FUN_0267bc10(lVar1,&local_4c);
  bVar2 = *(byte *)(param_1 + 0x1c514);
  iVar4 = FUN_02672e00(lVar1);
  if (iVar4 <= (char)bVar2 || 0x7f < bVar2) {
    bVar2 = 0xff;
  }
  if (bVar2 < 0x28) {
    psVar7 = (short *)FUN_02677ea0(lVar1);
  }
  else {
    psVar7 = &DAT_05586008;
  }
  uVar8 = FUN_0277d7b4(psVar7,&local_48);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(psVar7);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        bVar2 = *(byte *)(param_1 + 0x1c514);
        if ((*PTR_DAT_04c4b988 == '\0') && (*psVar7 == -2)) {
          iVar10 = -1;
        }
        else {
          iVar10 = 0;
          iVar4 = 0;
          do {
            if ((*(int *)(param_1 + 0x268 + (long)iVar4 * 0x1a8 + 0x1a0) == 0) &&
               (lVar9 = param_1 + 0x268 + (long)iVar4 * 0x1a8,
               (*(byte *)(lVar9 + 0x18) >> 1 & 1) == 0)) {
              FUN_03412d40(lVar9,PTR_PTR_04bb2238,psVar7,0);
              goto LAB_031744a8;
            }
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + 1;
          } while (iVar4 != 0x10e);
          iVar10 = -1;
        }
LAB_031744a8:
        uVar8 = (long)(char)bVar2 & 0xffffffff;
        if (0x27 < bVar2) {
          uVar8 = 0;
        }
        *(int *)(param_1 + 0x1c1b8 + uVar8 * 4) = iVar10;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c50c) = 0x25;
  }
  lVar9 = *(long *)(param_1 + 0x228);
  if (((lVar9 != 0) && (iVar4 = FUN_0267a9f0(lVar1), *(char *)(lVar9 + 0x290) == '\0')) &&
     ((iVar10 = *(int *)(lVar9 + 0x260), iVar10 != iVar4 || (iVar10 != *(int *)(lVar9 + 0x264))))) {
    *(int *)(lVar9 + 0x294) = iVar10;
    *(int *)(lVar9 + 0x298) = iVar4;
    *(undefined1 *)(lVar9 + 0x290) = 1;
    *(undefined1 *)(lVar9 + 0x29c) = 1;
  }
  return 1;
}

