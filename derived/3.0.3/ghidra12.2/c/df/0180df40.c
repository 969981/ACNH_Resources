
bool FUN_0180df40(void)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb5ce0;
  puVar3 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return false;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    iVar6 = 0;
  }
  else {
    if (*(long *)(lVar10 + 0x330) == 0) {
LAB_0180dff0:
      iVar6 = 0;
      lVar10 = *(long *)puVar4;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar8,0);
      if ((iVar6 == 0x758f7eaf) && (*(long *)puVar3 != 0)) {
        lVar10 = *(long *)(*(long *)puVar3 + 0x330);
        if (lVar10 == 0) goto LAB_0180dff0;
        iVar6 = *(int *)(lVar10 + 0x248);
        lVar10 = *(long *)puVar4;
      }
      else {
        iVar6 = 0;
        lVar10 = *(long *)puVar4;
      }
    }
    if (lVar10 == 0) goto LAB_0180e0ac;
  }
  sVar2 = *(short *)puVar5;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((iVar6 == 4) && ((*puVar1 & 0x200000) != 0)) {
        return true;
      }
    }
    else if (iVar6 == 4) {
      return true;
    }
  }
LAB_0180e0ac:
  lVar10 = *(long *)puVar3;
  iVar9 = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x330) == 0) {
      iVar9 = 0;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar8,0);
      iVar9 = 0;
      if (iVar7 == 0x758f7eaf) {
        iVar9 = 0;
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(*(long *)puVar3 + 0x330);
          iVar9 = 0;
          if (lVar10 != 0) {
            iVar9 = *(int *)(lVar10 + 0x244);
          }
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bbe4b0;
  if ((iVar6 != 2) || (*(int *)(PTR_DAT_04bbe4b0 + 0xac) != iVar9)) {
    sVar2 = *(short *)puVar5;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar1 >> 0x19 & 1) != 0) && (iVar6 == 1)) && ((*puVar1 & 0x80) != 0)) {
        return true;
      }
    }
    lVar10 = *(long *)puVar3;
    iVar9 = 0;
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x330) == 0) {
        iVar9 = 0;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar7 = FUN_006bd550(*puVar8,0);
        iVar9 = 0;
        if (iVar7 == 0x758f7eaf) {
          iVar9 = 0;
          if (*(long *)puVar3 != 0) {
            lVar10 = *(long *)(*(long *)puVar3 + 0x330);
            iVar9 = 0;
            if (lVar10 != 0) {
              iVar9 = *(int *)(lVar10 + 0x244);
            }
          }
        }
      }
    }
    if ((iVar6 != 2) || (*(int *)(puVar4 + 0xb0) != iVar9)) {
      lVar10 = *(long *)puVar3;
      iVar9 = 0;
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0x330) == 0) {
          iVar9 = 0;
        }
        else {
          puVar8 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar7 = FUN_006bd550(*puVar8,0);
          iVar9 = 0;
          if (iVar7 == 0x758f7eaf) {
            iVar9 = 0;
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(*(long *)puVar3 + 0x330);
              iVar9 = 0;
              if (lVar10 != 0) {
                iVar9 = *(int *)(lVar10 + 0x244);
              }
            }
          }
        }
      }
      return *(int *)(puVar4 + 0xa8) == iVar9 && iVar6 == 1;
    }
  }
  return true;
}

