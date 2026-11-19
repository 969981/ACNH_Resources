
/* WARNING: Removing unreachable block (ram,0x03b7a520) */
/* WARNING: Removing unreachable block (ram,0x03b7a534) */
/* WARNING: Removing unreachable block (ram,0x03b7a340) */
/* WARNING: Removing unreachable block (ram,0x03b7a354) */
/* WARNING: Removing unreachable block (ram,0x03b7a430) */
/* WARNING: Removing unreachable block (ram,0x03b7a444) */
/* WARNING: Removing unreachable block (ram,0x03b7a214) */

void FUN_03b7a0d0(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *__dest;
  undefined *local_b8;
  char *pcStack_b0;
  
  lVar4 = *(long *)(*param_1 + 8);
  __dest = *(char **)(lVar4 + 0x30);
  if (__dest != "CustomCurve") {
    iVar2 = 0xb;
    if (*(int *)(lVar4 + 0x38) < 0xc) {
      iVar2 = *(int *)(lVar4 + 0x38) + -1;
    }
    memcpy(__dest,"CustomCurve",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "Segments";
  local_b8 = puVar1;
  uVar3 = FUN_038f3be0(lVar4,&local_b8,PTR_PTR_04bb2238,param_3);
  if (*(long *)(param_2 + 0x68) == param_2 + 0x60) {
    return;
  }
  pcStack_b0 = "Segment";
  local_b8 = puVar1;
  FUN_038f3be0(uVar3,&local_b8,PTR_PTR_04bb2238,param_3);
                    /* WARNING: Could not recover jumptable at 0x03b7a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_03b7a27c + (ulong)DAT_041e8102 * 4))();
  return;
}

