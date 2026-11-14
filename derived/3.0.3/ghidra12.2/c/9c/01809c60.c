
undefined8
FUN_01809c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)PTR_DAT_04bb2720;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  iVar4 = 0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x330) == 0) {
      iVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      iVar4 = 0;
      if (iVar2 == 0x758f7eaf) {
        iVar4 = 0;
        if (*plVar6 != 0) {
          lVar5 = *(long *)(*plVar6 + 0x330);
          iVar4 = 0;
          if (lVar5 != 0) {
            iVar4 = *(int *)(lVar5 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xb0) == iVar4) {
    FUN_018081d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11);
  }
  else {
    lVar5 = *plVar6;
    iVar4 = 0;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x330) == 0) {
        iVar4 = 0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        iVar4 = 0;
        plVar6 = (long *)PTR_DAT_04bb2720;
        if (iVar2 == 0x758f7eaf) {
          iVar4 = 0;
          if (*(long *)PTR_DAT_04bb2720 != 0) {
            lVar5 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
            iVar4 = 0;
            if (lVar5 != 0) {
              iVar4 = *(int *)(lVar5 + 0x244);
            }
          }
        }
      }
    }
    puVar1 = PTR_DAT_04bbe4b0;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xac) == iVar4) {
      FUN_01808c00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
    }
    else {
      lVar5 = *plVar6;
      iVar4 = 0;
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x330) == 0) {
          iVar4 = 0;
        }
        else {
          puVar3 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
          iVar2 = FUN_006bd550(*puVar3,0);
          iVar4 = 0;
          if (iVar2 == 0x758f7eaf) {
            iVar4 = 0;
            if (*plVar6 != 0) {
              lVar5 = *(long *)(*plVar6 + 0x330);
              iVar4 = 0;
              if (lVar5 != 0) {
                iVar4 = *(int *)(lVar5 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar1 + 0xa8) != iVar4) {
        return 0;
      }
      FUN_01809630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
      ;
    }
  }
  return 1;
}

