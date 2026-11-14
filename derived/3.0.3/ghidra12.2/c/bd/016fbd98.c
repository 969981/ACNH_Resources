
void FUN_016fbd98(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *local_60;
  char local_58;
  char local_57;
  undefined4 local_48;
  undefined4 local_44;
  
  local_48 = param_3;
  local_44 = param_1;
  FUN_0071c8d0(&local_60,&local_44,&local_48,0);
  plVar7 = local_60;
  if (local_60 != (long *)0x0) {
    if (((DAT_05247a80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05247a80), iVar3 != 0)) {
      DAT_05247a78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(&DAT_05247a80);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,&DAT_05247a78);
    if ((uVar4 & 1) == 0) {
      local_57 = '\0';
    }
  }
  if ((((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) &&
     ((long *)local_60[0xd] != (long *)0x0)) {
    uVar11 = *(undefined4 *)(param_2 + 4);
    uVar12 = *(undefined4 *)(param_2 + 8);
    uVar13 = *(undefined4 *)(param_2 + 0xc);
    puVar5 = (undefined4 *)(**(code **)(*(long *)local_60[0xd] + 0xf8))();
    *puVar5 = uVar11;
    puVar5[1] = uVar12;
    puVar5[2] = uVar13;
    plVar7 = (long *)local_60[0x12];
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b58);
      }
      uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb5b50);
      puVar2 = PTR_DAT_04bb27d0;
      if ((uVar4 & 1) != 0) {
        if ((*param_2 < 8) && (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
          pcVar6 = (char *)FUN_02582a24(param_2);
          plVar8 = *(long **)puVar2;
          cVar1 = *pcVar6;
          uVar4 = FUN_01d3e29c(*plVar8 + 8);
          pcVar6 = (char *)(*plVar8 + 0x472);
          if ((uVar4 & 1) == 0) {
            pcVar6 = PTR_DAT_04bc1220;
          }
          if (cVar1 != *pcVar6) {
            *(byte *)(plVar7[0x4f] + 0x18) = *(byte *)(plVar7[0x4f] + 0x18) | 8;
          }
        }
        *(uint *)(plVar7 + 0x2f) = *(uint *)(plVar7 + 0x2f) | 1;
        fVar9 = *(float *)(param_2 + 0x14);
        if (fVar9 < 0.0) {
          fVar9 = *(float *)(local_60 + 0x4f);
        }
        fVar10 = *(float *)(param_2 + 0x10);
        if (fVar10 < 0.0) {
          fVar10 = *(float *)((long)local_60 + 0x274);
        }
        *(undefined4 *)(plVar7 + 0x72) = uVar11;
        *(undefined4 *)((long)plVar7 + 0x394) = uVar12;
        *(undefined4 *)(plVar7 + 0x73) = uVar13;
        *(float *)((long)plVar7 + 0x39c) = fVar10;
        *(float *)(plVar7 + 0x74) = fVar9;
      }
    }
  }
  return;
}

