
void FUN_02133080(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (param_2 != 3) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x3c0);
    uVar3 = FUN_02085a50(lVar5,1,0);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x801) = 1;
      lVar1 = lVar5 + 0x10 + (ulong)*(uint *)(lVar5 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar5 + 0x294)) {
        lVar1 = lVar5 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3c0) + 0x29c) = 0x41f00000;
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NpcEscapePoisonInsect";
    if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
       (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_40,0);
    }
    FUN_0212eca8(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xaa50,0,0);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
  *(ulong *)(lVar5 + 0xad58) = *(ulong *)(lVar5 + 0xad58) & 0xffbfffffffffffff;
  return;
}

