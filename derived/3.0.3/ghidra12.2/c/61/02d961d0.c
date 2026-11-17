
/* WARNING: Removing unreachable block (ram,0x02d96498) */
/* WARNING: Removing unreachable block (ram,0x02d964d0) */
/* WARNING: Removing unreachable block (ram,0x02d9650c) */
/* WARNING: Removing unreachable block (ram,0x02d96548) */
/* WARNING: Removing unreachable block (ram,0x02d9655c) */
/* WARNING: Removing unreachable block (ram,0x02d96568) */
/* WARNING: Removing unreachable block (ram,0x02d96578) */
/* WARNING: Removing unreachable block (ram,0x02d96580) */
/* WARNING: Removing unreachable block (ram,0x02d965a8) */
/* WARNING: Removing unreachable block (ram,0x02d965b0) */
/* WARNING: Removing unreachable block (ram,0x02d965b4) */
/* WARNING: Removing unreachable block (ram,0x02d965c0) */
/* WARNING: Removing unreachable block (ram,0x02d965cc) */
/* WARNING: Removing unreachable block (ram,0x02d965d4) */
/* WARNING: Removing unreachable block (ram,0x02d96710) */
/* WARNING: Removing unreachable block (ram,0x02d9671c) */
/* WARNING: Removing unreachable block (ram,0x02d96724) */
/* WARNING: Removing unreachable block (ram,0x02d9674c) */
/* WARNING: Removing unreachable block (ram,0x02d96754) */
/* WARNING: Removing unreachable block (ram,0x02d96760) */
/* WARNING: Removing unreachable block (ram,0x02d9677c) */
/* WARNING: Removing unreachable block (ram,0x02d96764) */
/* WARNING: Removing unreachable block (ram,0x02d96774) */
/* WARNING: Removing unreachable block (ram,0x02d96780) */
/* WARNING: Removing unreachable block (ram,0x02d96804) */
/* WARNING: Removing unreachable block (ram,0x02d96860) */
/* WARNING: Removing unreachable block (ram,0x02d9689c) */
/* WARNING: Removing unreachable block (ram,0x02d968d8) */
/* WARNING: Removing unreachable block (ram,0x02d968f4) */
/* WARNING: Removing unreachable block (ram,0x02d96920) */
/* WARNING: Removing unreachable block (ram,0x02d96910) */
/* WARNING: Removing unreachable block (ram,0x02d96928) */
/* WARNING: Removing unreachable block (ram,0x02d96918) */
/* WARNING: Removing unreachable block (ram,0x02d96930) */
/* WARNING: Removing unreachable block (ram,0x02d96974) */
/* WARNING: Removing unreachable block (ram,0x02d96980) */
/* WARNING: Removing unreachable block (ram,0x02d96b2c) */
/* WARNING: Removing unreachable block (ram,0x02d96b7c) */
/* WARNING: Removing unreachable block (ram,0x02d96bf0) */
/* WARNING: Removing unreachable block (ram,0x02d96c44) */
/* WARNING: Removing unreachable block (ram,0x02d96c5c) */
/* WARNING: Removing unreachable block (ram,0x02d96e08) */
/* WARNING: Removing unreachable block (ram,0x02d96e58) */
/* WARNING: Removing unreachable block (ram,0x02d96ed4) */
/* WARNING: Removing unreachable block (ram,0x02d96f20) */
/* WARNING: Removing unreachable block (ram,0x02d96f38) */
/* WARNING: Removing unreachable block (ram,0x02d970bc) */
/* WARNING: Removing unreachable block (ram,0x02d96388) */
/* WARNING: Removing unreachable block (ram,0x02d965e0) */
/* WARNING: Removing unreachable block (ram,0x02d965e4) */
/* WARNING: Removing unreachable block (ram,0x02d97108) */
/* WARNING: Removing unreachable block (ram,0x02d97174) */
/* WARNING: Removing unreachable block (ram,0x02d965f0) */
/* WARNING: Removing unreachable block (ram,0x02d96664) */
/* WARNING: Removing unreachable block (ram,0x02d966a0) */
/* WARNING: Removing unreachable block (ram,0x02d966ac) */
/* WARNING: Removing unreachable block (ram,0x02d966c0) */
/* WARNING: Removing unreachable block (ram,0x02d96708) */
/* WARNING: Removing unreachable block (ram,0x02d97180) */
/* WARNING: Removing unreachable block (ram,0x02d963c8) */

void FUN_02d961d0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  lVar8 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  uVar2 = *(uint *)(lVar8 + 0x2f8);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      if ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x208) && uVar7 < *(uint *)(lVar8 + 0x208)) {
        puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x210) + uVar7 * 8);
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar9)(puVar9,puVar3), (uVar6 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02d96454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_02d96458 + (ulong)DAT_041807a5 * 4))();
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  FUN_02d97e60(param_1,param_2,0);
  return;
}

