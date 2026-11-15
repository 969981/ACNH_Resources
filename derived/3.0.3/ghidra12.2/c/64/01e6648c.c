
void FUN_01e6648c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_50;
  char *pcStack_48;
  
  uVar3 = (int)param_2 - 3;
  puVar1 = (ushort *)(param_1 + 0x12570);
  if (((4 < uVar3) && ((*puVar1 & 1) != 0)) && ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x126f8) = 0;
  }
  if (*(int *)(param_1 + 0x77b0) - 3U < 5) {
    *puVar1 = *puVar1 & 0xffdf;
  }
  FUN_01ea5580(param_1,param_2,param_3,param_4 & 1);
  if (uVar3 < 5) {
    uVar2 = *puVar1;
    if ((uVar2 & 1) != 0) goto LAB_01e6652c;
    uVar2 = uVar2 >> 1 & 1;
  }
  else {
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) == 0) {
      return;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 1) == 0) goto LAB_01e66610;
LAB_01e6652c:
    *puVar1 = uVar2 & 0xfffe;
    FUN_02194700(param_1 + 0xef00);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar7 != 0) {
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
       (plVar8 = *(long **)(lVar9 + 0x48), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_50,0);
    }
    *(undefined1 *)(param_1 + 0x56e8) = 0;
    *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) & 0xbf;
    uVar6 = DAT_053e0cf8;
    *(undefined4 *)(param_1 + 0xaa34) = DAT_053e0cf4;
    uVar5 = DAT_053e0cec;
    uVar4 = DAT_053e0ce4;
    *(undefined4 *)(param_1 + 0xaa38) = uVar6;
    uVar6 = DAT_053e0cfc;
    *(undefined8 *)(param_1 + 0xaa24) = uVar4;
    *(undefined8 *)(param_1 + 0xaa2c) = uVar5;
    *(undefined4 *)(param_1 + 0xaa3c) = uVar6;
    uVar6 = DAT_053e0d00;
    *(undefined4 *)(param_1 + 0x125ec) = 0;
    *(undefined4 *)(param_1 + 0xaa40) = uVar6;
    if (4 < uVar3) goto LAB_01e66610;
    uVar2 = *puVar1;
    *puVar1 = uVar2 | 0x20;
    uVar2 = uVar2 & 2;
  }
  if (uVar2 != 0) {
    return;
  }
LAB_01e66610:
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x568) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
  return;
}

