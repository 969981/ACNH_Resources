
void FUN_01f40300(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_50;
  char *pcStack_48;
  
  uVar2 = (ulong)local_50 >> 0x20;
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  uVar1 = (int)param_2 - 3;
  if (((4 < uVar1) && ((*(uint *)(param_1 + 0xaf3c) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xaf34) = 0;
  }
  if (*(int *)(param_1 + 0x77b0) - 3U < 5) {
    local_50 = (undefined *)CONCAT44((int)uVar2,5);
    *(uint *)(param_1 + 0xaf3c) = *(uint *)(param_1 + 0xaf3c) & 0xffffffdf;
  }
  FUN_01ea5580(param_1,param_2,param_3,param_4 & 1);
  if (uVar1 < 5) {
    uVar8 = *(uint *)(param_1 + 0xaf3c);
    if ((uVar8 & 1) != 0) goto LAB_01f403d8;
  }
  else {
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) == 0) {
      return;
    }
    uVar8 = *(uint *)(param_1 + 0xaf3c);
    if ((uVar8 & 1) == 0) goto LAB_01f404f0;
LAB_01f403d8:
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    *(uint *)(param_1 + 0xaf3c) = uVar8 & 0xfffffffe;
    FUN_02194700(param_1 + 0xaf40);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "NpcActivityAIEnable";
    if (((puVar10[0x227] != 0) && (lVar9 = *(long *)(puVar10[0x227] + 0x78), lVar9 != 0)) &&
       (plVar7 = *(long **)(lVar9 + 0x48), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_50,0);
    }
    *(undefined1 *)(param_1 + 0x56e8) = 0;
    *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) & 0xbf;
    uVar5 = DAT_053e0cf8;
    *(undefined4 *)(param_1 + 0xaa34) = DAT_053e0cf4;
    uVar4 = DAT_053e0cec;
    uVar3 = DAT_053e0ce4;
    *(undefined4 *)(param_1 + 0xaa38) = uVar5;
    uVar5 = DAT_053e0cfc;
    *(undefined8 *)(param_1 + 0xaa24) = uVar3;
    *(undefined8 *)(param_1 + 0xaa2c) = uVar4;
    *(undefined4 *)(param_1 + 0xaa3c) = uVar5;
    uVar5 = DAT_053e0d00;
    *(undefined4 *)(param_1 + 0xe5b0) = 0;
    *(undefined4 *)(param_1 + 0xaa40) = uVar5;
    if (4 < uVar1) goto LAB_01f404f0;
    uVar8 = *(uint *)(param_1 + 0xaf3c) | 0x20;
    *(uint *)(param_1 + 0xaf3c) = uVar8;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    return;
  }
LAB_01f404f0:
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x568) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
  return;
}

