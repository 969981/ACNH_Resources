
void FUN_03824b10(long param_1,char *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  
  if ((*(byte *)(*(long *)PTR_DAT_04bb26a8 + 0xb3890) >> 5 & 1) != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x100));
  uVar14 = *(undefined4 *)(param_2 + 8);
  cVar4 = *param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    iVar7 = (int)((float)(int)*(float *)(param_2 + 4) / 5.0) - (uint)(*(float *)(param_2 + 4) < 0.0)
    ;
    iVar5 = (int)((float)(int)*(float *)(param_2 + 0xc) / 5.0) -
            (uint)(*(float *)(param_2 + 0xc) < 0.0);
    puVar8 = (undefined8 *)
             FUN_02a055b0(param_1,iVar7 - *(int *)(param_1 + 0xc),iVar5 - *(int *)(param_1 + 0x10),0
                         );
    if (puVar8 != (undefined8 *)0x0) goto LAB_03824c54;
    if (((*(char *)(param_1 + 8) != '\0') &&
        (uVar6 = iVar5 - *(int *)(param_1 + 0x10), -1 < (int)uVar6)) &&
       (iVar5 = *(int *)(param_1 + 0x60), (int)uVar6 < iVar5)) {
      plVar11 = *(long **)(param_1 + 0x58);
      if (uVar6 < *(uint *)(param_1 + 0x68)) {
        iVar2 = *(int *)(param_1 + 100) + uVar6;
        iVar3 = 0;
        if (iVar5 <= iVar2) {
          iVar3 = iVar5;
        }
        plVar11 = plVar11 + (iVar2 - iVar3);
      }
      lVar12 = *plVar11;
      puVar13 = (undefined8 *)(lVar12 + -8);
      do {
        lVar12 = *(long *)(lVar12 + 8);
        if ((undefined8 *)(lVar12 + -8) == puVar13) goto LAB_03824c50;
        puVar8 = *(undefined8 **)(lVar12 + -8);
        psVar1 = (short *)(puVar8 + 1);
      } while ((iVar7 != *psVar1) && (puVar8 = (undefined8 *)0x0, *psVar1 <= iVar7));
      goto LAB_03824c54;
    }
  }
LAB_03824c50:
  puVar8 = (undefined8 *)0x0;
LAB_03824c54:
  if (((*PTR_DAT_04bcb100 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bcb100), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bcb0f8 = PTR_DAT_04bcb0f0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bcb100);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar9 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bcb0f8), (uVar9 & 1) != 0)) {
    *(undefined4 *)(puVar8 + 2) = uVar14;
    uVar10 = 1;
    if (cVar4 == '\0') {
      uVar10 = 0xff;
    }
    *(undefined1 *)((long)puVar8 + 0xc) = uVar10;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
  return;
}

