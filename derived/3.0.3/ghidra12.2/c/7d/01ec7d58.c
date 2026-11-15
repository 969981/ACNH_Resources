
/* WARNING: Removing unreachable block (ram,0x01ec7dd4) */

void FUN_01ec7d58(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  long *local_150;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
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
  local_158 = 0;
  local_150 = (long *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  if (puVar6[0x227] == 0) {
    return;
  }
  local_148 = (undefined *)CONCAT44(local_148._4_4_,0x11);
  uVar3 = FUN_03850890(puVar6[0x227],0x11,&local_168,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (local_150 == (long *)0x0) {
LAB_01ec7ee8:
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
  }
  else {
    if (*local_150 == 0) {
      local_35 = 0;
      local_138 = 0x100;
      puStack_140 = local_134;
      local_134[0] = 0;
      local_148 = PTR_DAT_04bb21f8 + 0x10;
      lVar4 = *(long *)(local_150[2] + 8);
      FUN_038d1270(&local_148,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
    }
    else {
      iVar2 = *(int *)(*local_150 + 8);
      if (iVar2 < 0x60000000) {
        piVar5 = (int *)(*(long *)(local_150[2] + 8) + (long)iVar2);
        if (*piVar5 < 1) goto LAB_01ec7ed4;
        piVar5 = (int *)(((ulong)(uint)piVar5[1] & 0xfffffff) + *(long *)(local_150[2] + 8) + 4);
      }
      else {
        uVar1 = iVar2 + 0xa0000000;
        if (*(uint *)(local_158 + 0x80) <= uVar1) {
          uVar1 = 0;
        }
        lVar4 = *(long *)(local_158 + 0x88) + (ulong)uVar1 * 0x32;
        piVar5 = (int *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
      }
      if (*piVar5 == 1) goto LAB_01ec7ee8;
      if (*piVar5 != 0) {
        return;
      }
    }
LAB_01ec7ed4:
    local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  }
  FUN_01509afc(lVar4 + 0x278,&local_148);
  return;
}

