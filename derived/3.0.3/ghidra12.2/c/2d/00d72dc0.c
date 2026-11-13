
void FUN_00d72dc0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)
           std::__libcpp_verbose_abort("bad_variant_access was thrown in -fno-exceptions mode");
  lVar3 = *(long *)*puVar2;
  *(undefined4 *)(lVar3 + 0xb0) = 1;
  lVar4 = *(long *)(*(long *)(lVar3 + 8) + 0x288);
  *(undefined4 *)(lVar4 + 0x20) = 4;
  *(undefined1 *)(lVar4 + 0x24) = 1;
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(lVar3 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(lVar3 + 8) + 0x2a8);
  }
  FUN_01dbdd90(DAT_0537d558,puVar1,0);
  return;
}

