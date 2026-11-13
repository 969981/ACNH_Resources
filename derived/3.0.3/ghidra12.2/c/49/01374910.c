
/* WARNING: Removing unreachable block (ram,0x01374a24) */
/* WARNING: Removing unreachable block (ram,0x01374a34) */
/* WARNING: Removing unreachable block (ram,0x01374a40) */

void FUN_01374910(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined **local_98;
  undefined1 local_90;
  undefined **local_88;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  local_78 = PTR_DAT_04bbc1a0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    local_68 = 0;
    local_78 = local_78 + 0x10;
    pcStack_70 = PTR_DAT_04bb2010 + 0x10;
    uStack_58 = 0;
    local_98 = &PTR_FUN_04993830;
    local_90 = 1;
    local_88 = &local_78;
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    local_60 = pcStack_70;
    if (iVar2 != 0) {
      lVar8 = (long)iVar2 << 3;
      puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_98)(&local_98,*puVar7);
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
    }
    FUN_011e41b8(1);
    FUN_019535ac(*(undefined8 *)PTR_DAT_04bb47e0,1);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb4850;
    pcStack_70 = "FlightBalloonEnable";
    FUN_0273f0a0(&local_78);
    *(undefined2 *)(lVar8 + 8) = 0x101;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
       (lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0), lVar8 != 0)) {
      fVar11 = (float)*(int *)(param_1 + 0x18) * 0.5;
      uVar6 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar6 = (uint)(fVar11 < 0.0);
      }
      iVar2 = (int)fVar11 - uVar6;
      fVar11 = (float)*(int *)(param_1 + 0x1c) * 0.5;
      uVar6 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar6 = (uint)(fVar11 < 0.0);
      }
      iVar9 = (int)fVar11 - uVar6;
      fVar11 = (float)*(int *)(param_1 + 0x28) * 0.5;
      uVar6 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar6 = (uint)(fVar11 < 0.0);
      }
      iVar3 = (int)fVar11 - uVar6;
      fVar11 = (float)*(int *)(param_1 + 0x2c) * 0.5;
      uVar6 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar6 = (uint)(fVar11 < 0.0);
      }
      iVar10 = (int)fVar11 - uVar6;
      iVar1 = iVar2;
      if (iVar3 <= iVar2) {
        iVar1 = iVar3;
      }
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      iVar3 = iVar9;
      if (iVar9 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar10 <= iVar9) {
        iVar9 = iVar10;
      }
      if (iVar3 + 1 != iVar9) {
        iVar10 = iVar1;
        do {
          uVar6 = iVar10 - *(int *)(lVar8 + 0x28);
          uVar4 = iVar9 - *(int *)(lVar8 + 0x2c);
          if ((uVar6 < *(uint *)(lVar8 + 0x18) && uVar4 <= *(uint *)(lVar8 + 0x1c)) &&
              (*(uint *)(lVar8 + 0x18) <= uVar6 || *(uint *)(lVar8 + 0x1c) != uVar4)) {
            lVar5 = lVar8 + 0x40;
LAB_01374b94:
            FUN_0138367c(lVar5);
          }
          else if (((*(char *)(lVar8 + 0x88) != '\0') &&
                   ((uint)(iVar10 - *(int *)(lVar8 + 0x98)) < *(uint *)(lVar8 + 0xa0))) &&
                  ((uint)(iVar9 - *(int *)(lVar8 + 0x9c)) < *(uint *)(lVar8 + 0xa4))) {
            lVar5 = lVar8 + 0xa8;
            goto LAB_01374b94;
          }
          if (iVar10 < iVar2) {
            iVar10 = iVar10 + 1;
          }
          else {
            iVar9 = iVar9 + 1;
            iVar10 = iVar1;
          }
        } while ((iVar1 != iVar10) || (iVar3 + 1 != iVar9));
      }
    }
  }
  return;
}

