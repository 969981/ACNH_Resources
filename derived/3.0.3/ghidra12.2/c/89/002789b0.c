
undefined8 FUN_002789b0(long *param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bcd350;
  if (*(char *)((long)param_1 + 0x84) != '\0') {
    if (*(char *)((long)param_1 + 0xc1) == '\0') {
      *(undefined1 *)((long)param_1 + 0x85) = 1;
      return 0;
    }
    uVar5 = FUN_002212e4(param_1);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0);
    }
    local_60 = 0;
    FUN_002282f0(&local_60);
    uVar6 = *(undefined8 *)puVar1;
    param_1[0xf] = local_60 - param_1[0xe];
    uVar2 = FUN_0026aa40(uVar6);
    *(undefined1 *)((long)param_1 + 0x82) = uVar2;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_0026c404(*(undefined8 *)puVar1);
  }
  uVar5 = FUN_002212e4(*(undefined8 *)(*(long *)puVar1 + 0x10));
  if ((((uVar5 & 1) == 0) &&
      (lVar9 = *(long *)puVar1, *(int *)(*(long *)(lVar9 + 0x50) + 0x158) == 0)) &&
     (*(char *)(*(long *)(lVar9 + 0x30) + 100) == '\0')) {
    if (*(char *)(*(long *)(lVar9 + 0x20) + 0x104) != '\0') {
      FUN_0027fa50();
      (**(code **)(**(long **)(*(long *)puVar1 + 0x20) + 0x10))
                (*(long **)(*(long *)puVar1 + 0x20),0);
      lVar9 = *(long *)puVar1;
    }
    uVar5 = FUN_002212e4(*(undefined8 *)(lVar9 + 8));
    lVar9 = *(long *)puVar1;
    if ((uVar5 & 1) == 0) {
      iVar4 = FUN_0026c5a0(lVar9);
      if ((iVar4 == 1) && (bVar3 = FUN_0026bfe0(*(undefined8 *)puVar1), bVar3 < 0x20)) {
        lVar8 = FUN_002ba790(DAT_04c61168);
        lVar9 = *(long *)(lVar8 + 0x20);
        do {
          if (lVar9 == lVar8 + 0x18) {
            memset((void *)((long)param_1 + 0x91),0,0x20);
            *(undefined2 *)((long)param_1 + 0xb1) = 0;
            *(undefined1 *)((long)param_1 + 0xb3) = 0xfd;
            param_1[0x17] = 0;
            *(undefined2 *)(param_1 + 0x18) = 0;
            *(undefined1 *)((long)param_1 + 0xc2) = 0;
            *(undefined1 *)((long)param_1 + 0x86) = 0xfd;
            *(undefined1 *)(param_1 + 0x12) = 0xfd;
            param_1[0x11] = 0;
            (**(code **)(*param_1 + 0x10))(param_1,1);
            uVar5 = (**(code **)(*param_1 + 0x58))(param_1,param_2 & 1,param_3);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            FUN_00278c98(0);
            FUN_00278cf0(param_1);
            uVar6 = *(undefined8 *)puVar1;
            *(undefined2 *)((long)param_1 + 0x84) = 1;
            FUN_00269d30(uVar6,4,0xfd);
            return 1;
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          if ((lVar10 == *(long *)(lVar8 + 0x98)) || (*(int *)(lVar10 + 0x4c) - 5U < 2)) {
            uVar5 = FUN_00269a70(*(undefined8 *)puVar1,*(undefined1 *)(lVar10 + 0x38));
            if ((uVar5 & 1) == 0) {
              lVar10 = *(long *)(lVar9 + 0x10);
              goto LAB_00278b64;
            }
          }
          else {
LAB_00278b64:
            *(undefined4 *)(lVar10 + 0x4c) = 7;
          }
          lVar9 = *(long *)(lVar9 + 8);
        } while( true );
      }
    }
    else {
      plVar7 = *(long **)(lVar9 + 0x110);
      if (plVar7 == (long *)0x0) {
        uVar6 = *(undefined8 *)(lVar9 + 8);
        local_60 = CONCAT44(local_60._4_4_,0x6439);
        local_44 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_44);
        FUN_002296c4(auStack_70,&local_60);
        FUN_002665d0(uVar6,auStack_70);
        (**(code **)(**(long **)(*(long *)puVar1 + 8) + 0x10))(*(long **)(*(long *)puVar1 + 8),1);
      }
      else {
        local_58 = 0;
        local_60 = CONCAT35(local_60._5_3_,0xfd00000013);
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_60);
      }
    }
  }
  return 0;
}

