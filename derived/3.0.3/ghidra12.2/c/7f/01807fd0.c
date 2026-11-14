
undefined8 FUN_01807fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  iVar4 = 0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x330) == 0) {
      iVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar4 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar4 = 0;
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(*(long *)puVar1 + 0x330);
          iVar4 = 0;
          if (lVar5 != 0) {
            iVar4 = *(int *)(lVar5 + 0x244);
          }
        }
      }
    }
  }
  if (DAT_05292418 == iVar4) {
    FUN_018077d0(param_1,param_2,param_3,param_4);
  }
  else {
    lVar5 = *(long *)puVar1;
    iVar4 = 0;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar4 = 0;
        if (iVar2 == 0x758f7eaf) {
          iVar4 = 0;
          if (*(long *)puVar1 != 0) {
            lVar5 = *(long *)(*(long *)puVar1 + 0x330);
            iVar4 = 0;
            if (lVar5 != 0) {
              iVar4 = *(int *)(lVar5 + 0x244);
            }
          }
        }
      }
    }
    if (DAT_05292414 == iVar4) {
      FUN_01807af0(param_1,param_2,param_3,param_4);
    }
    else {
      lVar5 = *(long *)puVar1;
      iVar4 = 0;
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x330) == 0) {
          iVar4 = 0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
          iVar2 = FUN_006bd550(*puVar3,0);
          iVar4 = 0;
          if (iVar2 == 0x758f7eaf) {
            iVar4 = 0;
            if (*(long *)puVar1 != 0) {
              lVar5 = *(long *)(*(long *)puVar1 + 0x330);
              iVar4 = 0;
              if (lVar5 != 0) {
                iVar4 = *(int *)(lVar5 + 0x244);
              }
            }
          }
        }
      }
      if (DAT_05292410 != iVar4) {
        return 0;
      }
      FUN_01807e10(param_1,param_2,param_3,param_4);
    }
  }
  return 1;
}

