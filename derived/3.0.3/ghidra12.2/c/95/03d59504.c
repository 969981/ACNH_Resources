
void FUN_03d59504(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = DAT_05ae7600;
  plVar5 = *(long **)(param_1 + 0x210);
  if (plVar5 == (long *)0x0) {
    if (DAT_05ae7600 == 0) {
      plVar5 = malloc(0xa8);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar7 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xa8,8);
    }
    puVar1 = PTR_DAT_04bb2718;
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    *(undefined4 *)(plVar5 + 8) = 0;
    lVar7 = *(long *)puVar1;
    *(undefined8 *)((long)plVar5 + 0x44) = 0;
    *(undefined8 *)((long)plVar5 + 0x4c) = 0;
    *(undefined1 *)((long)plVar5 + 0x54) = 0;
    plVar5[4] = (long)(plVar5 + 3);
    plVar5[5] = 0;
    plVar5[2] = 0x800000000;
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[6] = (long)(plVar5 + 6);
    plVar5[7] = (long)(plVar5 + 6);
    puVar1 = PTR_DAT_04bcb568 + 0x10;
    uVar4 = *(undefined4 *)(*(long *)(lVar7 + 0x418) + 0x14);
    *(undefined8 *)((long)plVar5 + 0x5c) = 0x50000001e;
    plVar5[0xd] = (long)puVar1;
    plVar5[0x11] = (long)puVar1;
    *(undefined1 *)((long)plVar5 + 100) = 0;
    *(undefined4 *)(plVar5 + 0xb) = uVar4;
    *(undefined4 *)(plVar5 + 10) = 0xffffffff;
    *(long **)(param_1 + 0x210) = plVar5;
  }
  *(undefined4 *)(param_3 + 0x20) = param_2;
  lVar7 = *plVar5;
  plVar2 = (long *)(*(int *)((long)plVar5 + 0x14) + param_3);
  *plVar5 = (long)plVar2;
  *plVar2 = lVar7;
  plVar2[1] = (long)plVar5;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar2;
  }
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  *(long *)(param_3 + 0x18) = param_1;
  return;
}

