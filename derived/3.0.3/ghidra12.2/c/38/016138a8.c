
undefined8 * FUN_016138a8(long param_1,uint *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint local_60 [2];
  undefined **local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  uVar2 = DAT_05ae9268;
  lVar5 = DAT_05ae7600;
  local_60[0] = *param_2;
  if (local_60[0] < 6) {
    puStack_50 = (undefined8 *)(&PTR_s_c3D_Main_049b3990)[local_60[0]];
  }
  else {
    puStack_50 = &DAT_0407ebb1;
  }
  local_48 = 0;
  local_58 = &PTR_LAB_048f9770;
  local_44 = 0x100;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0xd28);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xd28,8);
  }
  memset(puVar4,0,0xd28);
  FUN_039a6720(puVar4);
  *puVar4 = &DAT_049b3a48;
  puVar4[0x1a4] = &PTR_LAB_049b3b18;
  FUN_039721c0(uVar2,puVar4,local_60,0);
  *(undefined1 *)((long)puVar4 + 0x93) = 1;
  FUN_03eb32b0(puVar4);
  lVar5 = puVar4[0x10];
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 8) = 1;
    *(undefined4 *)(lVar5 + 0x98) = 0x40000000;
  }
  FUN_01614080(param_1,param_2);
  puVar1 = (undefined8 *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0xf8) * 2;
  if (5 < *(uint *)(param_1 + 0xf8)) {
    puVar1 = (undefined8 *)(param_1 + 0x98);
  }
  *puVar1 = puVar4;
  *(undefined4 *)(puVar1 + 1) = *param_3;
  if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xfc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x100) + (long)*(int *)(param_1 + 0xf8) * 8) = puVar1;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  }
  return puVar4;
}

