
void FUN_01f45e18(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  char *pcStack_38;
  
  if (*(long *)(param_1 + 0x87b0) != 0) {
    *(int *)(*(long *)(param_1 + 0x87b0) + 4) = *param_2;
    *(undefined4 *)(*(long *)(param_1 + 0x87b0) + 8) = *(undefined4 *)(param_1 + 0x87bc);
    *(undefined4 *)(*(long *)(param_1 + 0x87b0) + 0xc) = *(undefined4 *)(param_1 + 0x77b0);
    FUN_01f8f290(*(long *)(param_1 + 0x87b0) + 0x10,param_1 + 0x7800);
  }
  if (*param_2 == 1) {
    local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    *(uint *)(param_1 + 0xaf3c) = *(uint *)(param_1 + 0xaf3c) & 0xfffffffe;
    FUN_02194700(param_1 + 0xaf40);
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NpcActivityAIEnable";
    if (((puVar7[0x227] != 0) && (lVar6 = *(long *)(puVar7[0x227] + 0x78), lVar6 != 0)) &&
       (plVar5 = *(long **)(lVar6 + 0x48), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_40,0);
    }
    *(undefined1 *)(param_1 + 0x56e8) = 0;
    *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) & 0xbf;
    uVar3 = DAT_053e0cf8;
    *(undefined4 *)(param_1 + 0xaa34) = DAT_053e0cf4;
    uVar2 = DAT_053e0cec;
    uVar1 = DAT_053e0ce4;
    *(undefined4 *)(param_1 + 0xaa38) = uVar3;
    uVar3 = DAT_053e0cfc;
    *(undefined8 *)(param_1 + 0xaa24) = uVar1;
    *(undefined8 *)(param_1 + 0xaa2c) = uVar2;
    *(undefined4 *)(param_1 + 0xaa3c) = uVar3;
    *(undefined4 *)(param_1 + 0xaa40) = DAT_053e0d00;
  }
  return;
}

