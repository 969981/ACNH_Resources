
void FUN_038c1340(long param_1,long *param_2,uint *param_3,long param_4,long param_5,ulong param_6,
                 undefined8 param_7,int param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  size_t sVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_148 [128];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 auStack_a8 [72];
  
  *(bool *)(param_1 + 0x494) = 0x300000 < param_6;
  *(undefined8 *)(param_1 + 0x440) = param_7;
  *(int *)(param_1 + 0x488) = param_8;
  uVar16 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30);
  (**(code **)PTR_DAT_04bcf5d8)(param_1 + 8,uVar16);
  puVar5 = PTR_DAT_04bcf610;
  (**(code **)PTR_DAT_04bcf610)(auStack_148);
  puVar4 = PTR_DAT_04bcf330;
  (**(code **)PTR_DAT_04bcf330)(auStack_148,uVar16);
  puVar7 = PTR_DAT_04bcf620;
  (**(code **)PTR_DAT_04bcf620)(auStack_148,0x62);
  uVar18 = param_4 + 0xfffU & 0xfffffffffffff000;
  (**(code **)PTR_DAT_04bcf618)(auStack_148,param_3,uVar18);
  (**(code **)PTR_DAT_04bcf338)(param_1 + 0x210,auStack_148);
  (**(code **)PTR_DAT_04bbd7b8)(auStack_a8,uVar16);
  (**(code **)PTR_DAT_04bbd7b0)(auStack_a8);
  (**(code **)PTR_DAT_04bbd7c8)(auStack_a8,param_1 + 0x210,0,uVar18);
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x410,auStack_a8);
  local_b8 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x410);
  local_c8 = local_b8 + (ulong)param_3[2];
  lStack_c0 = (ulong)*param_3 + (long)param_3;
  local_b8 = local_b8 + (ulong)param_3[3];
  lStack_b0 = (ulong)param_3[1] + (long)param_3;
  (**(code **)PTR_DAT_04bcf5f0)(param_1 + 8,2,&local_c8);
  if (((DAT_05ae7468 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_05ae7468), iVar10 != 0)) {
    DAT_05ae7460 = (ulong)(param_8 + 0x200) + 0xfff & 0x1fffff000;
    __cxa_guard_release(&DAT_05ae7468);
  }
  (**(code **)puVar5)(auStack_148);
  (**(code **)puVar4)(auStack_148,uVar16);
  (**(code **)puVar7)(auStack_148,0x22);
  sVar8 = DAT_05ae7460;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(DAT_05ae7460);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar19 + 8);
      if (lVar11 != 0) {
        puVar2 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) {
        pvVar12 = (void *)0x0;
        goto LAB_038c15b0;
      }
    }
    pvVar12 = (void *)(**(code **)(*param_2 + 0x30))(param_2,sVar8,0x1000);
  }
LAB_038c15b0:
  puVar6 = PTR_DAT_04bcf618;
  (**(code **)PTR_DAT_04bcf618)(auStack_148,pvVar12,DAT_05ae7460);
  puVar5 = PTR_DAT_04bcf338;
  (**(code **)PTR_DAT_04bcf338)(param_1 + 0x310,auStack_148);
  (**(code **)PTR_DAT_04bbd7b0)(auStack_148);
  (**(code **)PTR_DAT_04bbd7b8)(auStack_148,uVar16);
  (**(code **)PTR_DAT_04bbd7c8)(auStack_148,param_1 + 0x310,0,param_8);
  (**(code **)PTR_DAT_04bbd7d0)(param_1 + 0x448,auStack_148);
  uVar13 = (**(code **)PTR_DAT_04bcf038)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x478) = uVar13;
  (**(code **)PTR_DAT_04bcf070)(auStack_148);
  (**(code **)PTR_DAT_04bcf068)(auStack_148,uVar16);
  (**(code **)PTR_DAT_04bcf098)(auStack_148,1);
  (**(code **)PTR_DAT_04bcf090)(auStack_148,0x49);
  bVar9 = *(char *)(param_1 + 0x494) != '\0';
  uVar14 = 0x500;
  if (bVar9) {
    uVar14 = 0x900;
  }
  uVar17 = 1;
  if (bVar9) {
    uVar17 = 2;
  }
  uVar15 = 0x512;
  if (bVar9) {
    uVar15 = 0x8c2;
  }
  (**(code **)PTR_DAT_04bcf710)(auStack_148,uVar14,uVar15);
  (**(code **)PTR_DAT_04bcf720)(auStack_148,uVar17);
  (**(code **)PTR_DAT_04bcf750)(auStack_148,param_5 + 0x200);
  (**(code **)PTR_DAT_04bcf610)(auStack_a8);
  (**(code **)puVar4)(auStack_a8,uVar16);
  (**(code **)puVar7)(auStack_a8,0x21);
  (**(code **)puVar6)(auStack_a8,param_5,param_6 + 0xfff & 0xfffffffffffff000);
  (**(code **)puVar5)(param_1 + 0x110,auStack_a8);
  (**(code **)PTR_DAT_04bcf0a8)(auStack_148,param_1 + 0x110,0x200);
  (**(code **)PTR_DAT_04bcf0b8)(param_1 + 0x88,auStack_148);
  puVar4 = PTR_DAT_04bbd7c0;
  lVar19 = *(long *)PTR_DAT_04bbd7c0;
  nn::os::LockMutex((MutexType *)(lVar19 + 0x158));
  piVar1 = (int *)(*(long *)puVar4 + 0xec);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (**(code **)PTR_DAT_04bcf670)(*(long *)puVar4 + 0x58,iVar10,param_1 + 0x88,0);
  nn::os::UnlockMutex((MutexType *)(lVar19 + 0x158));
  uVar16 = (**(code **)PTR_DAT_04bcf2f8)(uVar16,iVar10,*(undefined4 *)(*(long *)puVar4 + 0xd8));
  *(undefined8 *)(param_1 + 0x108) = uVar16;
  return;
}

