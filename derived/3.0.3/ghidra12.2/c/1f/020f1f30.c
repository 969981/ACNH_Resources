
void FUN_020f1f30(char *param_1)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_60;
  float local_58;
  uint *local_50;
  uint local_24;
  
  local_24 = 0;
  cVar2 = *param_1;
  lVar8 = *(long *)PTR_DAT_04bb3968;
  local_58 = (float)(int)cVar2;
  if (lVar8 != 0) {
    local_60 = &PTR_FUN_04a77108;
    local_50 = &local_24;
    if (*(int *)(lVar8 + 0xb88) != 0) {
      lVar12 = (long)*(int *)(lVar8 + 0xb88) << 3;
      puVar10 = *(undefined8 **)(lVar8 + 0xb90);
      do {
        (*(code *)*local_60)(&local_60,*puVar10);
        lVar12 = lVar12 + -8;
        puVar10 = puVar10 + 1;
      } while (lVar12 != 0);
    }
  }
  puVar4 = PTR_DAT_04bb27c0;
  local_60 = (undefined **)CONCAT44((float)(int)param_1[5],(float)(int)*(short *)(param_1 + 6));
  local_58 = (float)(int)*(short *)(param_1 + 8);
  if ((local_24 == 0) || (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0)) goto LAB_020f2128;
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(local_24 >> 0x14) * 8);
  if ((plVar9 == (long *)0x0) ||
     (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != local_24)))) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020f2078;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020f2078:
    uVar11 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb6a80 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6a80), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb6a78 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6a80);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6a78), (uVar7 & 1) != 0)) {
        FUN_01f17500(puVar10,(long)param_1[1],param_1[2] != '\0',(long)param_1[3],(long)param_1[4],
                     &local_60,param_1 + 0xc);
      }
    }
  }
LAB_020f2128:
  lVar8 = FUN_021c9770((int)cVar2,1);
  if (lVar8 != 0) {
    cVar2 = param_1[2];
    uVar3 = *(undefined2 *)(param_1 + 3);
    *(char *)(lVar8 + 0x200) = param_1[1];
    *(undefined2 *)(lVar8 + 0x202) = uVar3;
    *(float *)(lVar8 + 0x20c) = local_58;
    *(bool *)(lVar8 + 0x201) = cVar2 != '\0';
    *(undefined ***)(lVar8 + 0x204) = local_60;
    *(undefined2 *)(lVar8 + 0x210) = *(undefined2 *)(param_1 + 0xc);
    *(char *)(lVar8 + 0x212) = param_1[0xe];
    *(char *)(lVar8 + 0x213) = param_1[0xf];
    *(undefined4 *)(lVar8 + 0x214) = *(undefined4 *)(param_1 + 0x10);
    if (cVar2 == '\0') {
      *(uint *)(lVar8 + 0x2ac) = *(uint *)(lVar8 + 0x2ac) & 0xfffffffe;
    }
  }
  return;
}

