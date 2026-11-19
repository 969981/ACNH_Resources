
void FUN_038b8d2c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  long local_90;
  
  if ((*(byte *)((long)param_1 + 0x242) & 3) != 1) {
    *(undefined1 *)((long)param_1 + 0x241) = 0;
    if ((code *)param_1[0x13] != (code *)0x0) {
      (*(code *)param_1[0x13])(1);
    }
    puVar7 = PTR_DAT_04bd0d18;
    local_148 = PTR_DAT_04bd0d18 + 0x10;
    FUN_00347d68(local_140);
    puVar5 = PTR_DAT_04bbd7c0;
    local_140[0] = 2;
    local_90 = param_1[0x31];
    local_138 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    (**(code **)PTR_DAT_04bcf0f0)(local_90,param_1[0x2f],0,*(undefined4 *)((long)param_1 + 0xc4));
    (**(code **)PTR_DAT_04bcf0f8)(param_1[0x31],param_1[0x30],(int)param_1[0x19]);
    (**(code **)PTR_DAT_04bcf100)(param_1[0x31]);
    *(undefined1 *)(*(long *)puVar5 + 0x1e0) = 1;
    puVar4 = PTR_DAT_04bbd560;
    lVar13 = param_1[0x31];
    uVar9 = (**(code **)PTR_DAT_04bbd560)(param_1[0x32]);
    puVar6 = PTR_DAT_04bcf2d0;
    (**(code **)PTR_DAT_04bcf2d0)(lVar13,0x10,uVar9);
    (**(code **)PTR_DAT_04bcf2b8)(param_1[0x31],*(long *)puVar5 + 0x78);
    (**(code **)PTR_DAT_04bcf2c0)(param_1[0x31],*(long *)puVar5 + 0x58);
    (**(code **)PTR_DAT_04bcfe78)(param_1[0x31],param_1[0x34],0,(int)param_1[0x35]);
    plVar10 = (long *)param_1[0x20];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_148);
      (**(code **)(*param_1 + 0x108))(param_1,3);
    }
    puVar14 = (undefined8 *)param_1[8];
    if (((*PTR_DAT_04bd0c18 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bd0c18), iVar8 != 0)) {
      *(undefined ***)PTR_DAT_04bd0c10 = &PTR_LAB_04b63850;
      __cxa_guard_release(PTR_DAT_04bd0c18);
    }
    uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bd0c10);
    if ((uVar11 & 1) == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    if (puVar14[0x51] != 0) {
      nn::os::LockMutex((MutexType *)(puVar14[0x51] + 0x20));
    }
    FUN_038bbef0(puVar14 + 0x42);
    if (puVar14[0x51] != 0) {
      nn::os::UnlockMutex((MutexType *)(puVar14[0x51] + 0x20));
    }
    plVar10 = (long *)param_1[0x3a];
    if ((plVar10 != (long *)0x0) || (plVar10 = (long *)param_1[0x20], plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_148,param_1[0x2b]);
    }
    lVar13 = param_1[0x31];
    lVar12 = (**(code **)puVar4)(param_1[0x32]);
    (**(code **)puVar6)(lVar13,0,lVar12 + 0x10);
    *(undefined1 *)(*(long *)puVar5 + 0x1e0) = 0;
    lVar13 = (**(code **)PTR_DAT_04bcf108)(param_1[0x31]);
    param_1[0x41] = lVar13;
    if ((char)param_1[0x48] == '\0') {
      (**(code **)(*param_1 + 0xf8))(param_1);
    }
    local_148 = puVar7 + 0x10;
    local_140[0] = 0;
    FUN_00347da4(local_140);
    if ((char)param_1[0x48] != '\0') {
      (**(code **)(*(long *)param_1[0x3d] + 0x18))((long *)param_1[0x3d],1,0);
    }
    lVar13 = *(long *)PTR_DAT_04bd0c50;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x768);
      *(uint *)(lVar13 + 0x764) = uVar1;
      *(undefined4 *)(lVar13 + 0x768) = *(undefined4 *)(lVar13 + 0x75c);
      uVar2 = *(uint *)(lVar13 + 0x760);
      if (CARRY4(uVar1,uVar2)) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        iVar8 = uVar1 - uVar3 * uVar2;
        *(int *)(lVar13 + 0x764) = iVar8;
        *(int *)(lVar13 + 0x75c) = iVar8;
      }
      *(undefined1 *)(lVar13 + 0x758) = 0;
    }
    lVar13 = *(long *)PTR_DAT_04bd0c58;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x488);
      *(uint *)(lVar13 + 0x484) = uVar1;
      *(undefined4 *)(lVar13 + 0x488) = *(undefined4 *)(lVar13 + 0x47c);
      uVar2 = *(uint *)(lVar13 + 0x480);
      if (CARRY4(uVar1,uVar2)) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        iVar8 = uVar1 - uVar3 * uVar2;
        *(int *)(lVar13 + 0x484) = iVar8;
        *(int *)(lVar13 + 0x47c) = iVar8;
      }
      *(undefined1 *)(lVar13 + 0x478) = 0;
    }
    lVar13 = *(long *)PTR_DAT_04bd0c60;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x490);
      *(uint *)(lVar13 + 0x48c) = uVar1;
      *(undefined4 *)(lVar13 + 0x490) = *(undefined4 *)(lVar13 + 0x484);
      uVar2 = *(uint *)(lVar13 + 0x488);
      if (CARRY4(uVar1,uVar2)) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        iVar8 = uVar1 - uVar3 * uVar2;
        *(int *)(lVar13 + 0x48c) = iVar8;
        *(int *)(lVar13 + 0x484) = iVar8;
      }
      *(undefined1 *)(lVar13 + 0x480) = 0;
    }
    if ((code *)param_1[0x13] != (code *)0x0) {
      (*(code *)param_1[0x13])(0);
    }
  }
  return;
}

