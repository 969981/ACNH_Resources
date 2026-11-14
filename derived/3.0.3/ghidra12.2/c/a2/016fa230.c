
void FUN_016fa230(undefined4 param_1,long param_2,undefined4 param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  float local_50;
  long *local_48;
  char local_40;
  char local_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_38 = param_3;
  uStack_34 = param_1;
  FUN_0071c8d0(&local_48,&uStack_34,&local_38,0);
  plVar7 = local_48;
  if (local_48 != (long *)0x0) {
    if (((DAT_05246e58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05246e58), iVar2 != 0)) {
      DAT_05246e50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(&DAT_05246e58);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,&DAT_05246e50);
    if ((uVar3 & 1) == 0) {
      local_3f = '\0';
    }
  }
  if (((local_48 != (long *)0x0) && (local_40 != '\0')) && (local_3f != '\0')) {
    plVar7 = (long *)local_48[0xd];
    fVar9 = 0.1;
    if (0.1 <= *(float *)(param_2 + 0x10)) {
      fVar9 = *(float *)(param_2 + 0x10);
    }
    *(float *)(local_48 + 0x51) = fVar9;
    if ((plVar7 != (long *)0x0) && (plVar6 = (long *)local_48[0x12], plVar6 != (long *)0x0)) {
      if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b58);
      }
      uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb5b50);
      if ((uVar3 & 1) != 0) {
        uVar5 = 0x1000;
        if ((param_4 & 1) == 0) {
          uVar5 = 0;
        }
        *(undefined4 *)(plVar6[0x4f] + 0x60) = local_38;
        *(uint *)(plVar6 + 0x2f) =
             *(uint *)(plVar6 + 0x2f) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x14);
        *(uint *)(plVar6[0x4f] + 0x68) = *(uint *)(plVar6[0x4f] + 0x68) & 0xffffefff | uVar5;
        local_58 = *(long *)(param_2 + 4);
        local_50 = *(float *)(param_2 + 0xc);
        if (((*(float *)(param_2 + 4) == 0.0) && (*(float *)(param_2 + 8) == 0.0)) &&
           ((local_50 == 0.0 && (*(char *)(param_2 + 0x14) != '\0')))) {
          uVar8 = (undefined4)((ulong)*(long *)((long)local_48 + 0x274) >> 0x20);
          local_58 = *(long *)((long)local_48 + 0x274);
          local_50 = *(float *)((long)local_48 + 0x27c);
        }
        else {
          uVar8 = FUN_016e026c(0,&local_58,0,0);
          local_58 = CONCAT44(uVar8,(undefined4)local_58);
        }
        plVar1 = local_48;
        *(undefined4 *)(local_48 + 0x4f) = uVar8;
        *(undefined4 *)((long)local_48 + 0x274) = (undefined4)local_58;
        *(float *)((long)local_48 + 0x27c) = local_50;
        puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf8))(plVar7);
        *puVar4 = *(undefined4 *)((long)plVar1 + 0x274);
        puVar4[1] = (int)plVar1[0x4f];
        puVar4[2] = *(undefined4 *)((long)plVar1 + 0x27c);
        fVar9 = *(float *)(local_48 + 0x51);
        fVar10 = *(float *)(local_48 + 0x50);
        fVar11 = *(float *)((long)local_48 + 0x284);
        *(float *)(plVar6 + 0x73) = local_50;
        plVar6[0x72] = local_58;
        *(float *)((long)plVar6 + 0x39c) = fVar9 * fVar10;
        *(float *)(plVar6 + 0x74) = fVar9 * fVar11;
      }
    }
  }
  return;
}

