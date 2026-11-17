
void FUN_03137b80(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *local_50;
  undefined4 local_48;
  
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x98) + uVar4 * 8) + 8) == param_2) {
        FUN_03137320(param_1,uVar4,0);
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 == 0) {
          return;
        }
        uVar2 = *(uint *)(param_1 + 0x34);
        *(uint *)(lVar7 + 0x230) = uVar2;
        plVar5 = *(long **)(lVar7 + 0x210);
        *(uint *)(lVar7 + 0x22c) = uVar2;
        if ((((plVar5 != (long *)0x0) && (plVar5[1] != 0 && uVar2 < *(uint *)(lVar7 + 0x218))) &&
            (plVar6 = *(long **)(*(long *)(lVar7 + 0x220) + (long)(int)uVar2 * 8),
            plVar6 != (long *)0x0)) && (plVar6[1] != 0)) {
          local_48 = 8;
          puVar1 = PTR_DAT_04bc0cb8 + 0x10;
          local_50 = puVar1;
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
          uVar3 = (**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
          local_48 = 8;
          local_50 = puVar1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 0x98))(plVar5[1],uVar3);
        }
        *(undefined1 *)(lVar7 + 0x264) = 0;
        *(undefined4 *)(lVar7 + 0x234) = 999;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (*(uint *)(param_1 + 0x90) != uVar4);
  }
  return;
}

