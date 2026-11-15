
void FUN_023bafd8(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  int local_48;
  int aiStack_44 [4];
  undefined1 local_34;
  
  local_34 = 0;
  cVar1 = *(char *)(param_1 + 0x1903);
  aiStack_44[1] = 0x3e8f5c29;
  aiStack_44[2] = 0x3f800000;
  local_48 = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  aiStack_44[3] = 0x41c80000;
  aiStack_44[0] = local_48;
  uVar4 = FUN_023b7bb8(param_1,aiStack_44);
  if ((uVar4 & 1) == 0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_48);
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(int *)(param_1 + 0x874) == 1) {
      plVar5 = *(long **)(param_1 + 0x60);
      if (plVar5 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar5 = &DAT_05240280;
        }
        else {
          plVar5 = &DAT_05240280;
        }
      }
      uVar4 = (**(code **)(*plVar5 + 0x100))();
      if ((uVar4 & 1) != 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x1902);
        if (7 < uVar6) {
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x87c) = uVar6;
        FUN_023ca3ec(param_1,param_1 + 0x878);
        return;
      }
    }
    if ((cVar1 != '\0') && (uVar4 = FUN_0231bde0(param_1,1), (uVar4 & 1) != 0)) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x1902);
    if (7 < bVar2) {
      bVar2 = 0;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar2,6);
      return;
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar2 == 1) {
      FUN_0231b68c(param_1,6);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  }
  FUN_023164ec(param_1,6);
  return;
}

