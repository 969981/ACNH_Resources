
void FUN_0188d954(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_052c8808;
  if ((DAT_052c8808 != (undefined4 *)0x0) &&
     (((iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x230), iVar1 == DAT_052c8808[2] ||
       (iVar1 == DAT_052c8808[4])) &&
      (*(char *)(DAT_052c8808 + 3) != '\0' && *(char *)(DAT_052c8808 + 5) != '\0')))) {
    *DAT_052c8808 = param_2;
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
  }
  return;
}

