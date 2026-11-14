
undefined8 FUN_0180c3b0(void)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar9;
  uint uVar8;
  int iVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04bb5ce0;
  puVar3 = PTR_DAT_04bb2720;
  uVar2 = *(ushort *)PTR_DAT_04bb6298;
  uVar8 = (uint)(short)uVar2;
  uVar9 = (uint)(short)uVar2;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    if (uVar2 != 0xffff) goto code_r0x0180c4b4;
  }
  else if (uVar2 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar9 * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) goto LAB_0180c5d4;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
    if (0xff < uVar9) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) goto LAB_0180c5d4;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
    if (0xff < uVar8) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) goto LAB_0180c5d4;
code_r0x0180c4b4:
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar9 * 8);
    if (0xff < uVar8) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) goto LAB_0180c5d4;
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  iVar10 = 0;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x330) == 0) {
      iVar10 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      iVar10 = 0;
      if (iVar6 == 0x758f7eaf) {
        iVar10 = 0;
        if (*(long *)puVar3 != 0) {
          lVar11 = *(long *)(*(long *)puVar3 + 0x330);
          iVar10 = 0;
          if (lVar11 != 0) {
            iVar10 = *(int *)(lVar11 + 0x244);
          }
        }
      }
    }
  }
  puVar5 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar10) {
    lVar11 = *(long *)puVar3;
    iVar10 = 0;
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 0x330) == 0) {
        iVar10 = 0;
      }
      else {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        iVar10 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar10 = 0;
          if (*(long *)puVar3 != 0) {
            lVar11 = *(long *)(*(long *)puVar3 + 0x330);
            iVar10 = 0;
            if (lVar11 != 0) {
              iVar10 = *(int *)(lVar11 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar5 + 0xd0) != iVar10) {
      return 0;
    }
  }
LAB_0180c5d4:
  if ((*(long *)puVar4 == 0) || (*(char *)(*(long *)puVar4 + 0xee4) == '\0')) {
    return 0;
  }
  return 1;
}

