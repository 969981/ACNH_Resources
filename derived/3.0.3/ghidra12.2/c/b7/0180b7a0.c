
undefined8 FUN_0180b7a0(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar6 = 0;
      if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
        iVar6 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292378 != iVar6) {
    iVar6 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar6 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar6 = 0;
        if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
          iVar6 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_05292374 != iVar6) {
      iVar6 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar3,0);
          iVar6 = 0;
          if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
            iVar6 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if (DAT_0529237c != iVar6) {
        if (DAT_04c487d4 != -1) {
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0x13 & 1) != 0) {
            return 1;
          }
        }
        iVar6 = 0;
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            iVar6 = 0;
          }
          else {
            puVar3 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar2 = FUN_006bd550(*puVar3,0);
            iVar6 = 0;
            if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
              iVar6 = 0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
              }
            }
          }
        }
        if (DAT_05292390 != iVar6) {
          iVar6 = 0;
          if (DAT_05aed670 != 0) {
            if (*(long *)(DAT_05aed670 + 0x330) == 0) {
              iVar6 = 0;
            }
            else {
              puVar3 = (undefined8 *)
                       (**(code **)(*DAT_05aed668 + 0x18))
                                 (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar2 = FUN_006bd550(*puVar3,0);
              iVar6 = 0;
              if ((iVar2 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
                iVar6 = 0;
                if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                  iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                }
              }
            }
          }
          if (((((DAT_05292394 != iVar6) && (uVar4 = FUN_017b8748(10), (uVar4 & 1) == 0)) &&
               (uVar4 = FUN_017b8748(0x22), (uVar4 & 1) == 0)) &&
              ((uVar4 = FUN_017b8748(0xb), (uVar4 & 1) == 0 &&
               (uVar4 = FUN_017b8748(0x1e), (uVar4 & 1) == 0)))) &&
             ((uVar4 = FUN_017b8748(0x20), (uVar4 & 1) == 0 &&
              ((uVar4 = FUN_017b8748(0x26), (uVar4 & 1) == 0 &&
               (uVar4 = FUN_017b8748(0x23), (uVar4 & 1) == 0)))))) {
            uVar5 = FUN_017b8748(0x30);
            return uVar5;
          }
        }
      }
    }
  }
  return 1;
}

