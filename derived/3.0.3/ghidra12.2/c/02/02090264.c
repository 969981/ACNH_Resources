
void FUN_02090264(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  undefined **local_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_04bb2720;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar6 = 0;
      if (iVar3 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar8 != 0) {
            iVar6 = *(int *)(lVar8 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_05292434 == iVar6) {
    if ((*(byte *)(*DAT_0537d558 + 0x476) < 2) && (*(int *)(DAT_0523adf0 + 0x98) == 0)) {
      uVar5 = FUN_021d7e50(DAT_0523adf0 + 0x58);
      *(int *)(param_1 + 8) = (int)uVar5;
      if ((int)uVar5 != -1) {
        lVar8 = FUN_021c9770(uVar5,1);
        if (lVar8 != 0) {
          if (*(char *)(lVar8 + 0x6c) == '\0') {
            if (*(int *)(lVar8 + 0x40) < 1) {
              piVar9 = &DAT_053da288;
            }
            else {
              iVar3 = *(int *)(lVar8 + 0x40) + *(int *)(lVar8 + 0x3c) + -1;
              iVar6 = 0;
              if (*(int *)(lVar8 + 0x38) <= iVar3) {
                iVar6 = *(int *)(lVar8 + 0x38);
              }
              piVar9 = (int *)(*(long *)(lVar8 + 0x30) + (long)(iVar3 - iVar6) * 0x10 + 4);
            }
          }
          else {
            piVar9 = (int *)(lVar8 + 0x68);
          }
          local_40 = (undefined **)CONCAT44(local_40._4_4_,*piVar9);
          if (*piVar9 == 0) {
            FUN_0208f100(param_1,uVar5 & 0xffffffff,1,1,0);
            local_40 = &PTR_LAB_04a71b10;
            lStack_38 = param_1;
            FUN_016d43e0(&local_40);
          }
        }
      }
    }
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) != 0) {
      uVar7 = 2;
      goto LAB_0209045c;
    }
  }
  lVar8 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar6 = 0;
      if (iVar3 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar8 != 0) {
            iVar6 = *(int *)(lVar8 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529237c == iVar6) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  lVar8 = *(long *)puVar2;
  iVar6 = 0;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar6 = 0;
      if (iVar3 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(*(long *)puVar2 + 0x330);
          iVar6 = 0;
          if (lVar8 != 0) {
            iVar6 = *(int *)(lVar8 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_0529239c != iVar6) {
    return;
  }
  uVar7 = 5;
LAB_0209045c:
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  return;
}

