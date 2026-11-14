
undefined8 FUN_0180ae80(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  
  if ((DAT_05292338 != 0) && (uVar6 = (ulong)(short)DAT_04c487d4, uVar6 != 0xffffffffffffffff)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      return 1;
    }
  }
  iVar5 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar5 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
        iVar5 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_052923e8._4_4_ != iVar5) {
    iVar5 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar5 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar5 = 0;
        if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
          iVar5 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_0529240c != iVar5) {
      iVar5 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar5 = 0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar3,0);
          iVar5 = 0;
          if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
            iVar5 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if (DAT_05292410 != iVar5) {
        iVar5 = 0;
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            iVar5 = 0;
          }
          else {
            puVar3 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar2 = FUN_006bd550(*puVar3,0);
            iVar5 = 0;
            if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
              iVar5 = 0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
              }
            }
          }
        }
        if (DAT_05292414 != iVar5) {
          iVar5 = 0;
          if (DAT_05aed670 != 0) {
            if (*(long *)(DAT_05aed670 + 0x330) == 0) {
              iVar5 = 0;
            }
            else {
              puVar3 = (undefined8 *)
                       (**(code **)(*DAT_05aed668 + 0x18))
                                 (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar2 = FUN_006bd550(*puVar3,0);
              iVar5 = 0;
              if ((iVar2 == 0x758f7eaf) && (iVar5 = 0, DAT_05aed670 != 0)) {
                iVar5 = 0;
                if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                  iVar5 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                }
              }
            }
          }
          if ((((DAT_05292418 != iVar5) && (uVar6 = FUN_017b8748(0x2b), (uVar6 & 1) == 0)) &&
              (uVar6 = FUN_017b8748(0x2c), (uVar6 & 1) == 0)) &&
             ((uVar6 = FUN_017b8748(0x2d), (uVar6 & 1) == 0 &&
              (uVar6 = FUN_017b8748(0x31), (uVar6 & 1) == 0)))) {
            uVar4 = FUN_017b8748(0x32);
            return uVar4;
          }
        }
      }
    }
  }
  return 1;
}

