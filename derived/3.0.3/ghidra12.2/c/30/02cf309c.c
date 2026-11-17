
/* WARNING: Removing unreachable block (ram,0x02cf3198) */
/* WARNING: Removing unreachable block (ram,0x02cf3144) */
/* WARNING: Removing unreachable block (ram,0x02cf30f8) */
/* WARNING: Removing unreachable block (ram,0x02cf30dc) */
/* WARNING: Removing unreachable block (ram,0x02cf3124) */
/* WARNING: Removing unreachable block (ram,0x02cf3178) */

uint FUN_02cf309c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_110 [8];
  undefined1 auStack_108 [216];
  
  FUN_02cde8f4(auStack_108);
  FUN_02cdeb4c(auStack_108,param_1 + 0x1f8);
  uVar2 = FUN_02665700(local_110);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_02665700(local_110);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_02665700(local_110);
      goto LAB_02cf31ac;
    }
  }
  uVar1 = 1;
LAB_02cf31ac:
  return uVar1 & 1;
}

