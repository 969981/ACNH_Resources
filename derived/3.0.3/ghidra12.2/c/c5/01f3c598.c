
void FUN_01f3c598(long *param_1,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_40;
  char *pcStack_38;
  
  uVar4 = (ulong)local_40 >> 0x20;
  local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
  if ((param_2 & 1) == 0) {
    uVar5 = *(uint *)((long)param_1 + 0xaf3c);
    *(uint *)((long)param_1 + 0xaf3c) = uVar5 & 0xfffffffe;
    if ((param_3 & 1) == 0) {
      local_40 = (undefined *)CONCAT44((int)uVar4,2);
      *(uint *)((long)param_1 + 0xaf3c) = uVar5 & 0xfffffffa;
      (**(code **)(*param_1 + 0x3a0))(param_1);
      FUN_020667c4();
    }
    FUN_02194700(param_1 + 0x15e8);
    puVar9 = *(undefined8 **)(param_1[1] + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NpcActivityAIEnable";
    if (((puVar9[0x227] != 0) && (lVar6 = *(long *)(puVar9[0x227] + 0x78), lVar6 != 0)) &&
       (plVar3 = *(long **)(lVar6 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_40,0);
    }
    puVar9 = &DAT_053e0ce4;
    *(undefined1 *)(param_1 + 0xadd) = 0;
    *(byte *)((long)param_1 + 0xaa44) = *(byte *)((long)param_1 + 0xaa44) & 0xbf;
    *(undefined4 *)((long)param_1 + 0xaa34) = DAT_053e0cf4;
    uVar7 = DAT_053e0ce4;
    uVar8 = DAT_053e0cec;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xaf3c) | 1;
    *(uint *)((long)param_1 + 0xaf3c) = uVar5;
    if ((param_4 & 1) == 0) {
      (**(code **)(*param_1 + 0x3c8))(param_1);
      uVar5 = *(uint *)((long)param_1 + 0xaf3c);
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    *(uint *)((long)param_1 + 0xaf3c) = uVar5 & 0xfffffffd;
    *(undefined4 *)(param_1[2] + 0x568) = 0;
    *(undefined4 *)(param_1[2] + 0x56c) = 0;
    *(undefined4 *)(param_1[2] + 0x570) = 0;
    puVar9 = *(undefined8 **)(param_1[1] + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NpcActivityAIEnable";
    if (((puVar9[0x227] != 0) && (lVar6 = *(long *)(puVar9[0x227] + 0x78), lVar6 != 0)) &&
       (plVar3 = *(long **)(lVar6 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_40,1);
    }
    lVar6 = param_1[3];
    uVar4 = FUN_02085a50(lVar6,1,0);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x801) = 1;
      lVar1 = lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar6 + 0x294)) {
        lVar1 = lVar6 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    uVar8 = DAT_053a9608;
    uVar7 = DAT_053a9600;
    puVar9 = &DAT_053a9600;
    *(undefined4 *)((long)param_1 + 0xaa34) = DAT_053a9610;
  }
  *(undefined8 *)((long)param_1 + 0xaa24) = uVar7;
  *(undefined8 *)((long)param_1 + 0xaa2c) = uVar8;
  *(undefined4 *)(param_1 + 0x1547) = *(undefined4 *)((long)puVar9 + 0x14);
  *(undefined4 *)((long)param_1 + 0xaa3c) = *(undefined4 *)(puVar9 + 3);
  *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)((long)puVar9 + 0x1c);
  return;
}

