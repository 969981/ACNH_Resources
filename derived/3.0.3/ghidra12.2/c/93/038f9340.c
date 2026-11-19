
void FUN_038f9340(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_60 [64];
  
  (*DAT_04c623e0)(auStack_60,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bcf918)(auStack_60);
  (**(code **)PTR_DAT_04bcf920)
            (auStack_60,(uint)*(byte *)(param_1 + 0x1d) + (uint)*(byte *)(param_1 + 0x1e) * 2,
             *(undefined1 *)(param_1 + 0x1c));
  (**(code **)PTR_DAT_04bcf928)
            (auStack_60,*(undefined1 *)(param_1 + 0x1f),*(undefined1 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x21));
  (**(code **)PTR_DAT_04bcf930)
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),auStack_60);
  (**(code **)PTR_DAT_04bcf938)(*(undefined4 *)(param_1 + 0x18),auStack_60);
  (**(code **)PTR_DAT_04bcf940)
            (auStack_60,*(ushort *)(param_1 + 0x26) & 1,*(undefined1 *)(param_1 + 0x23));
  (**(code **)PTR_DAT_04bcf948)(auStack_60,param_1);
  uVar6 = NEON_ucvtf((uint)*(byte *)(param_1 + 0x22));
  (**(code **)PTR_DAT_04bcf960)(uVar6,auStack_60);
  (**(code **)PTR_DAT_04bcf968)(auStack_60,*(undefined1 *)(param_1 + 0x24));
  lVar5 = *(long *)PTR_DAT_04bc1010;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar4 = PTR_DAT_04bcf9d8;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)puVar4)(param_2,auStack_60);
  piVar1 = (int *)(lVar5 + 0x64c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}

