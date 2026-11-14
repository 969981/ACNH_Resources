
/* WARNING: Removing unreachable block (ram,0x0154d79c) */
/* WARNING: Removing unreachable block (ram,0x0154d75c) */
/* WARNING: Removing unreachable block (ram,0x0154d71c) */
/* WARNING: Removing unreachable block (ram,0x0154d73c) */
/* WARNING: Removing unreachable block (ram,0x0154d77c) */
/* WARNING: Removing unreachable block (ram,0x0154d7bc) */

void FUN_0154d6c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) || (lVar2 = FUN_026f480c(), lVar2 == 0)) {
    return;
  }
  FUN_026f61ec(*(undefined8 *)puVar1);
  local_38 = param_1;
  FUN_0154d800(&local_38,lVar2 + 0x118);
  FUN_0154d800(&local_38,lVar2 + 0x25a0);
  FUN_0154d800(&local_38,lVar2 + 0x4a28);
  FUN_0154d800(&local_38,lVar2 + 0x6eb0);
  FUN_0154d800(&local_38,lVar2 + 0x9338);
  FUN_0154d800(&local_38,lVar2 + 0xb7c0);
  FUN_0154d800(&local_38,lVar2 + 0xdc48);
  FUN_026f62d4(*(undefined8 *)puVar1);
  return;
}

