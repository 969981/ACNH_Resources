
void FUN_01ee7f60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined2 local_108;
  undefined2 uStack_106;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_a0 = 0;
  iStack_104 = -1;
  uStack_100 = 0xffffffff;
  local_fc = 0xffffffff;
  uStack_f8 = 0xffffffff;
  local_f4 = 0xffffffff;
  local_9c = 0xffffffffffffffff;
  local_94 = 0xffffffffffffffff;
  local_8c = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_108 = 0;
  local_e0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffff00000000;
  local_d0 = 0xffffffff00000000;
  uStack_c8 = 0xffffffffffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffbf800000;
  local_f0 = 0xbf800000;
  uStack_e8 = 0;
  local_38 = 0xffffffff;
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  local_c0 = 0;
  uStack_b8 = 0xffffffff;
  local_b0 = 0xffffffff00000000;
  uStack_a8 = 0xffffffff00000000;
  if (lVar4 != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_108,lVar4 + 0x278);
  }
  if (iStack_104 != *(int *)(param_1 + 0xaed8)) {
    *(int *)(param_1 + 0xaed8) = iStack_104;
    if (**(char **)(param_1 + 0x78a8) == '\0') {
      pcVar3 = "NpcSinging";
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(param_1 + 0x78a0);
      pcVar3 = *(char **)(param_1 + 0x78a8);
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_108 = SUB82(puVar1,0);
    uStack_106 = (undefined2)((ulong)puVar1 >> 0x10);
    iStack_104 = (int)((ulong)puVar1 >> 0x20);
    uStack_100 = SUB84(pcVar3,0);
    local_fc = (undefined4)((ulong)pcVar3 >> 0x20);
    FUN_017081d0(puVar5,&local_108,6,0,0);
  }
  return;
}

