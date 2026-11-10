
undefined8
FUN_00279f50(long *param_1,uint param_2,void *param_3,undefined4 param_4,undefined4 param_5)

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
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_54;
  
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
    local_70 = 0;
    FUN_002282f0(&local_70);
    uVar6 = *(undefined8 *)puVar1;
    param_1[0xf] = local_70 - param_1[0xe];
    uVar2 = FUN_0026aa40(uVar6);
    *(undefined1 *)((long)param_1 + 0x82) = uVar2;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_0026c404(*(undefined8 *)puVar1);
  }
  uVar5 = FUN_002212e4(*(undefined8 *)(*(long *)puVar1 + 0x10));
  if (((uVar5 & 1) == 0) &&
     (lVar9 = *(long *)puVar1, *(char *)(*(long *)(lVar9 + 0x30) + 100) == '\0')) {
    if (*(char *)(*(long *)(lVar9 + 0x20) + 0x104) != '\0') {
      FUN_0027fa50();
      (**(code **)(**(long **)(*(long *)puVar1 + 0x20) + 0x10))
                (*(long **)(*(long *)puVar1 + 0x20),0);
      lVar9 = *(long *)puVar1;
    }
    uVar5 = FUN_002212e4(*(undefined8 *)(lVar9 + 8));
    lVar9 = *(long *)puVar1;
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(lVar9 + 0x110);
      if (plVar7 == (long *)0x0) {
        uVar6 = *(undefined8 *)(lVar9 + 8);
        local_70 = CONCAT44(local_70._4_4_,0x6439);
        local_54 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)&local_54);
        FUN_002296c4(auStack_80,&local_70);
        FUN_002665d0(uVar6,auStack_80);
        (**(code **)(**(long **)(*(long *)puVar1 + 8) + 0x10))(*(long **)(*(long *)puVar1 + 8),1);
        return 0;
      }
      local_68 = 0;
      local_70 = CONCAT35(local_70._5_3_,0xfd00000013);
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_70);
      return 0;
    }
    iVar4 = FUN_0026c5a0(lVar9);
    if ((iVar4 == 1) && (bVar3 = FUN_0026bfe0(*(undefined8 *)puVar1), bVar3 < 0x20)) {
      lVar8 = FUN_002ba790(DAT_04c61168);
      for (lVar9 = *(long *)(lVar8 + 0x20); lVar9 != lVar8 + 0x18; lVar9 = *(long *)(lVar9 + 8)) {
        lVar10 = *(long *)(lVar9 + 0x10);
        if ((lVar10 == *(long *)(lVar8 + 0x98)) || (*(int *)(lVar10 + 0x4c) - 5U < 2)) {
          uVar5 = FUN_00269a70(*(undefined8 *)puVar1,*(undefined1 *)(lVar10 + 0x38));
          if ((uVar5 & 1) == 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
            goto LAB_0027a110;
          }
        }
        else {
LAB_0027a110:
          *(undefined4 *)(lVar10 + 0x4c) = 7;
        }
      }
      memset((void *)((long)param_1 + 0x91),0,0x20);
      *(undefined2 *)((long)param_1 + 0xb1) = 0;
      param_1[0x17] = 0;
      *(undefined1 *)((long)param_1 + 0xb3) = 0xfd;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined1 *)((long)param_1 + 0xc2) = 0;
      param_1[0x11] = 0;
      *(undefined1 *)((long)param_1 + 0x86) = 0xfd;
      *(undefined1 *)(param_1 + 0x12) = 0xfd;
      if (param_3 == (void *)0x0) {
        param_4 = 0;
        param_5 = 0;
      }
      else {
        memcpy((void *)((long)param_1 + 0xc5),param_3,(ulong)*(ushort *)(*(long *)puVar1 + 0x98));
      }
      *(undefined4 *)(param_1 + 0x1d) = param_4;
      *(undefined4 *)((long)param_1 + 0xec) = param_5;
      (**(code **)(*param_1 + 0x10))(param_1,1);
      uVar5 = (**(code **)(*param_1 + 0x78))
                        (param_1,param_2 & 1,*(undefined2 *)(*(long *)puVar1 + 0x98));
      if ((uVar5 & 1) != 0) {
        FUN_00278c98();
        FUN_00278cf0(param_1);
        uVar6 = *(undefined8 *)puVar1;
        *(undefined2 *)((long)param_1 + 0x84) = 1;
        FUN_00269d30(uVar6,4,0xfd);
        return 1;
      }
    }
  }
  return 0;
}

