
void FUN_03c83d80(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  FUN_03b0f0c8();
  *(undefined4 *)(param_1 + 0x2e) = 0;
  puVar1 = param_1 + 0x2c;
  *param_1 = &PTR_FUN_04b84810;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = puVar1;
  uVar2 = *(undefined1 *)(param_2 + 0x180);
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x30) = uVar2;
  if (*(long *)(param_2 + 0x168) != param_2 + 0x160) {
    lVar8 = (long)*(int *)(param_2 + 0x174);
    lVar9 = *(long *)(param_2 + 0x168) - lVar8;
    do {
      lVar7 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        puVar6 = malloc(0x30);
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar7 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x30,8);
        }
      }
      uVar10 = *(undefined8 *)(lVar9 + 0x28);
      puVar6[2] = &PTR_LAB_048f9770;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar3 = PTR_DAT_04bb2120;
      *(undefined1 *)((long)puVar6 + 0x26) = 0;
      puVar6[3] = puVar3;
      FUN_03c5a110(puVar6 + 2,lVar9 + 0x10,0xffffffff,2);
      puVar6[5] = uVar10;
      lVar7 = param_1[0x2c];
      plVar5 = (long *)((long)*(int *)((long)param_1 + 0x174) + (long)puVar6);
      param_1[0x2c] = plVar5;
      *plVar5 = lVar7;
      plVar5[1] = (long)puVar1;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar5;
      }
      *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) + 1;
      lVar9 = *(long *)(lVar9 + lVar8 + 8) - lVar8;
    } while (lVar9 != (param_2 + 0x160) - lVar8);
  }
  return;
}

