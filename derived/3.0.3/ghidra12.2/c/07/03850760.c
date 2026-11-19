
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03850760(undefined4 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined **local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [255];
  undefined1 local_65;
  
  uVar5 = 0;
  do {
    lVar2 = *(long *)(param_2 + 0x78);
    if (lVar2 == 0) {
      if (-1 < (int)uVar5) {
        return;
      }
    }
    else if (*(int *)(lVar2 + 0x18) <= (int)uVar5) {
      return;
    }
    if (*(char *)(param_2 + 0xae) != '\0') {
      if (lVar2 == 0) {
        uVar4 = 0;
        uVar3 = _SUB_00000018;
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar4;
      }
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      if ((int)uVar1 < (int)uVar3) {
        *(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x20) + (ulong)uVar1 * 0x10) + 0xa0) = param_1;
      }
      else {
        local_65 = 0;
        local_168 = 0x100;
        local_164[0] = 0;
        local_178 = &PTR_LAB_048f9a70;
        lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0x50) + 0x10) + 8);
        puStack_170 = local_164;
        FUN_038d1270(&local_178,"%s.as",lVar2 + *(int *)(lVar2 + 0x24) + (long)*(int *)(lVar2 + 8));
      }
    }
    *(undefined4 *)(param_2 + 0xa8) = param_1;
    uVar5 = uVar5 + 1;
  } while( true );
}

