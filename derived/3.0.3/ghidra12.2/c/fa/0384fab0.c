
bool FUN_0384fab0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *__s;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(long *)(param_1 + 0x78) + 0x18);
    if (uVar5 <= param_2) {
      param_2 = 0;
    }
    uVar8 = (ulong)param_2;
  }
  uVar7 = (uint)uVar8;
  uVar1 = uVar7;
  if (uVar5 <= uVar7) {
    uVar1 = 0;
  }
  if (*(uint *)(param_1 + 0x80) <= uVar1) {
    uVar1 = 0;
  }
  cVar3 = **(char **)(*(long *)(param_1 + 0x88) + (long)(int)uVar1 * 0xe8 + 0x68);
  if (cVar3 != '\0') {
    uVar5 = uVar7;
    if (*(uint *)(param_1 + 0x80) <= uVar7) {
      uVar5 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar5 * 0xe8 + 0xc0) = 0;
    lVar9 = *(long *)(param_1 + 0x88);
    uVar5 = uVar7;
    if (*(uint *)(param_1 + 0x80) <= uVar7) {
      uVar5 = 0;
    }
    lVar6 = lVar9 + (long)(int)uVar5 * 0xe8;
    __s = *(undefined8 **)(lVar6 + 0x68);
    if (__s != &DAT_0407ebb1) {
      iVar2 = 0;
      if (*(int *)(lVar6 + 0x70) < 1) {
        iVar2 = *(int *)(lVar6 + 0x70) + -1;
      }
      memset(__s,0,(long)iVar2);
      *(undefined1 *)((long)__s + (long)iVar2) = 0;
    }
    (**(code **)(*(long *)(lVar6 + 0x60) + 0x18))((long *)(lVar6 + 0x60));
    uVar4 = FUN_006bd550(*(undefined8 *)(lVar6 + 0x68),0);
    *(undefined4 *)(lVar9 + (long)(int)uVar5 * 0xe8 + 0xb8) = uVar4;
    uVar5 = uVar7;
    if (*(uint *)(param_1 + 0x80) <= uVar7) {
      uVar5 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar5 * 0xe8 + 0xc4) =
         *(undefined4 *)(param_1 + 0xb0);
    uVar5 = uVar7;
    if (*(uint *)(param_1 + 0x80) <= uVar7) {
      uVar5 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar5 * 0xe8 + 200) = 0;
    if (*(char *)(param_1 + 0xae) != '\0') {
      lVar9 = *(long *)(param_1 + 0x78);
      if (((int)uVar7 < 0) || (*(int *)(lVar9 + 0x18) <= (int)uVar7)) {
        local_6d = 0;
        local_170 = 0x100;
        puStack_178 = local_16c;
        local_16c[0] = 0;
        local_180 = PTR_DAT_04bb21f8 + 0x10;
        lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_180,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8));
      }
      else {
        FUN_03ebf1bc(0x3f800000,*(undefined8 *)(*(long *)(lVar9 + 0x20) + uVar8 * 0x10),param_3 & 1,
                     *(undefined8 *)(lVar9 + 0x38));
        if ((param_3 & 1) != 0) {
          FUN_03ec5760(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x28));
        }
      }
    }
  }
  return cVar3 != '\0';
}

