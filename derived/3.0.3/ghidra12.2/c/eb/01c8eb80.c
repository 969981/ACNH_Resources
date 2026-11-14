
void FUN_01c8eb80(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *__src;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined2 *__dest;
  int *piVar8;
  undefined *local_d8;
  undefined2 *local_d0;
  undefined4 local_c8;
  undefined2 local_c4 [64];
  undefined2 local_44;
  
  local_44 = 0;
  local_d0 = local_c4;
  local_c8 = 0x41;
  local_c4[0] = 0;
  local_d8 = &DAT_04a447a0;
  uVar5 = FUN_01df33d0(&local_d8);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xaa) = 1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x68));
    iVar3 = *(int *)(param_1 + 0x98);
    iVar4 = *(int *)(param_1 + 0x90);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x98) = iVar3 + 1;
      iVar3 = *(int *)(param_1 + 0x94) + iVar3;
      iVar1 = 0;
      if (iVar4 <= iVar3) {
        iVar1 = iVar4;
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x88) + (long)(iVar3 - iVar1) * 0x98);
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      piVar8 = (int *)(puVar6 + 2);
      piVar8[0] = 0;
      piVar8[1] = 0;
      *piVar8 = 0x41;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      __dest = (undefined2 *)((long)puVar6 + 0x14);
      *__dest = 0;
      *puVar6 = &DAT_04a447a0;
      puVar6[1] = __dest;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      __src = local_d0;
      if (__dest != local_d0) {
        (**(code **)(local_d8 + 0x18))(&local_d8);
        lVar7 = 0;
        do {
          if (local_d0[lVar7] == 0) goto LAB_01c8eccc;
          if (local_d0[lVar7 + 1] == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_01c8eccc;
          }
          if (local_d0[lVar7 + 2] == 0) {
            lVar7 = lVar7 + 2;
            goto LAB_01c8eccc;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_01c8eccc:
        uVar2 = (uint)lVar7;
        if (*piVar8 <= (int)(uint)lVar7) {
          uVar2 = *piVar8 - 1;
        }
        uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
        memcpy(__dest,__src,uVar5);
        *(undefined2 *)((long)__dest + uVar5) = 0;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  }
  *(undefined1 *)(param_1 + 0xa9) = 1;
  return;
}

