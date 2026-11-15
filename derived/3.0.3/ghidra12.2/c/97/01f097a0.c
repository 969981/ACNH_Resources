
bool FUN_01f097a0(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  if ((*(ushort *)(param_1 + 0xaf84) & 1) == 0) {
    bVar2 = false;
  }
  else {
    if ((((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
        (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13)) &&
       (local_48 = (undefined *)CONCAT44((int)((ulong)local_48 >> 0x20),0x13),
       *(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)) {
      plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
      if (plVar4 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      uVar5 = (**(code **)(*plVar4 + 0x100))();
      if ((uVar5 & 1) != 0) {
        local_38 = 0;
        local_48 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_40 = PTR_DAT_04bb2010 + 0x10;
        local_28 = 0;
        local_30 = puStack_40;
        FUN_01811430(&local_48);
        lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar7 = *(float *)(lVar6 + 0x278) + -2.5;
        fVar8 = *(float *)(lVar6 + 0x280) + -2.5;
        iVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
        iVar1 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
        return (iVar1 <= local_28._4_4_ && local_38._4_4_ <= iVar1 + 1) &&
               (iVar3 <= (int)local_28 && (int)local_38 <= iVar3 + 1);
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

