
void FUN_0244a6c8(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0x2230) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 0x2232) = puVar1[2];
  *(undefined *)(param_1 + 0x2233) = puVar1[3];
  *(undefined4 *)(param_1 + 0x2234) = *(undefined4 *)(puVar1 + 4);
  if (*(char *)(param_1 + 0x191a) != '\0') {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    FUN_01707f58(puVar3,6,6,0);
  }
  local_44 = 0;
  uVar4 = FUN_023c9120(param_1,0,&local_44);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      uVar4 = __cxa_guard_acquire(&DAT_054f0960);
      puVar6 = (uint *)&DAT_054f0958;
      if ((int)uVar4 != 0) {
        DAT_054f0958 = 0;
        uVar4 = __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar6 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar6 = puVar6 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  *puVar6 = *puVar6 & 0xfffffeff;
  *(byte *)(param_3 + 0x14) = *(byte *)(param_3 + 0x14) & 0xdf;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar4 = FUN_0172fad0(*(long *)(param_1 + 0x60) + 0x12c0,param_1,PTR_DAT_04bbe070,
                         PTR_DAT_04bbe078,PTR_DAT_04bb6928);
    lVar5 = *(long *)(param_1 + 0x60);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x12d0) = 0;
      *(undefined1 *)(lVar5 + 0x142d) = 0;
      **(undefined1 **)(lVar5 + 0x12e0) = 0;
      *(undefined4 *)(lVar5 + 0x1330) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x1428) = 0;
      *(undefined8 *)(lVar5 + 0x1334) = 0;
      *(undefined8 *)(lVar5 + 0x133c) = 0;
      *(undefined4 *)(lVar5 + 0x1344) = 0;
    }
  }
  if ((param_2 == 0x5d) || (param_2 == 0x18)) {
    uVar4 = FUN_02332d7c(param_1,0);
  }
  if (*(int *)(param_1 + 0xa9c) != 0) {
    FUN_02447d34(uVar4,param_1 + 0xa9c);
  }
  if (*(int *)(param_1 + 0x1810) == 4) {
    FUN_016f8b70(param_1);
  }
  if (*(char *)(param_1 + 0xac1) == '\0') {
    return;
  }
  FUN_02332d7c(param_1,0);
  return;
}

