
void FUN_02457e64(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  char *local_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "PlayerBackToChairBed";
  if (((puVar4[0x227] != 0) && (lVar3 = *(long *)(puVar4[0x227] + 0x78), lVar3 != 0)) &&
     (plVar2 = *(long **)(lVar3 + 0x48), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_40,0);
  }
  local_40 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                      (float)*(int *)(param_1 + 0x1902) * 0.001);
  local_38 = (char *)CONCAT44(local_38._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  FUN_016d7dcc(param_1,&local_40,*(undefined1 *)(param_1 + 0x1916),1);
  return;
}

