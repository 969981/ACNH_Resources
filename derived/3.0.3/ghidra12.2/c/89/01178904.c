
void FUN_01178904(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  long lStack_48;
  
  lStack_48 = *param_3 + 2;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  lStack_58 = param_3[1] + 2;
  local_60 = puVar1;
  local_50 = puVar1;
  puVar4 = (undefined8 *)FUN_010fb170(*(undefined8 *)(param_1 + 8),&local_50,&local_60);
  if (puVar4 == (undefined8 *)0x0) {
    lStack_88 = param_3[1] + 2;
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 8);
    local_80 = *(undefined8 *)(param_1 + 0x10);
    lStack_98 = *param_3 + 2;
    if (*(int *)(lVar3 + 0x18) < *(int *)(lVar3 + 0x30)) {
      puVar4 = *(undefined8 **)(lVar3 + 0x20);
      plVar2 = (long *)(lVar3 + 8);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = *puVar4;
      }
      local_a0 = puVar1;
      local_90 = puVar1;
      FUN_010f8370(puVar4,&local_a0);
      puVar4[0x2b] = 0;
      puVar4[0x2c] = 0;
      lVar5 = *plVar2;
      *plVar2 = (long)(puVar4 + 0x2b);
      puVar4[0x2b] = lVar5;
      puVar4[0x2c] = plVar2;
      if (lVar5 != 0) {
        *(undefined8 **)(lVar5 + 8) = puVar4 + 0x2b;
      }
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(undefined1 *)(param_2 + 0x40) = 1;
  return;
}

