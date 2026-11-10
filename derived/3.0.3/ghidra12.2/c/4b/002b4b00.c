
void FUN_002b4b00(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  uVar2 = param_4 * 0x18;
  uVar7 = (ulong)uVar2;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(uVar7,uVar3);
  if ((uVar2 == 0) || (lVar4 == 0)) {
    *(long *)(param_2 + 8) = lVar4;
    if (lVar4 != 0) goto LAB_002b4b70;
LAB_002b4cd8:
    local_60 = 0x10c01;
  }
  else {
    uVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + uVar5) = 0;
      uVar5 = uVar5 + 4;
    } while (uVar7 != uVar5);
    *(long *)(param_2 + 8) = lVar4;
LAB_002b4b70:
    puVar1 = (undefined8 *)(param_2 + 0x18);
    if (param_4 != 0) {
      lVar8 = 0;
      *(long *)(param_2 + 0x48) = lVar4;
      *(uint *)(param_2 + 0x50) = param_4;
      do {
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x48) + lVar8);
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_002236bc(param_2 + 0x30,param_2 + 0x30,(long)puVar6 + (long)*(int *)(param_2 + 0x44));
        lVar8 = lVar8 + 0x18;
      } while ((ulong)param_4 * 0x18 != lVar8);
    }
    if (*(undefined8 **)(param_2 + 0x20) != puVar1) {
      puVar6 = *(undefined8 **)(param_2 + 0x20);
      do {
        puVar9 = (undefined8 *)puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_002236e0(param_2 + 0x30,param_2 + 0x30,(long)*(int *)(param_2 + 0x44) + (long)puVar6);
        puVar6 = puVar9;
      } while (puVar9 != puVar1);
    }
    FUN_002236b0(puVar1);
    uVar3 = FUN_0021f454();
    lVar4 = FUN_00285d10(uVar7,uVar3);
    if ((uVar2 == 0) || (lVar4 == 0)) {
      *(long *)(param_2 + 0x10) = lVar4;
      if (lVar4 == 0) goto LAB_002b4cd8;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar7 != uVar5);
      *(long *)(param_2 + 0x10) = lVar4;
    }
    puVar1 = (undefined8 *)(param_2 + 0x58);
    if (param_4 != 0) {
      *(uint *)(param_2 + 0x90) = param_4;
      lVar8 = 0;
      *(long *)(param_2 + 0x88) = lVar4;
      do {
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x88) + lVar8);
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_002236bc(param_2 + 0x70,param_2 + 0x70,(long)puVar6 + (long)*(int *)(param_2 + 0x84));
        lVar8 = lVar8 + 0x18;
      } while ((ulong)param_4 * 0x18 != lVar8);
    }
    if (*(undefined8 **)(param_2 + 0x60) != puVar1) {
      puVar6 = *(undefined8 **)(param_2 + 0x60);
      do {
        puVar9 = (undefined8 *)puVar6[1];
        *puVar6 = 0;
        puVar6[1] = 0;
        FUN_002236e0(param_2 + 0x70,param_2 + 0x70,(long)*(int *)(param_2 + 0x84) + (long)puVar6);
        puVar6 = puVar9;
      } while (puVar9 != puVar1);
    }
    FUN_002236b0(puVar1);
    local_60 = 0;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_44);
  FUN_002296c4(param_1,&local_60);
  return;
}

