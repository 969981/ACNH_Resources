
bool FUN_016cfd70(ulong *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  iVar2 = *(int *)(puVar5 + 7);
  if (iVar2 < 0x25b43b89) {
    if (iVar2 < -0x63176d3) {
      if (iVar2 < -0x214773f9) {
        if (iVar2 == -0x7a4d7ddc) goto LAB_016cff48;
        iVar4 = -0x3e25491c;
      }
      else {
        if (iVar2 == -0x214773f9) goto LAB_016cff48;
        iVar4 = -0xe5efd5a;
      }
    }
    else if (iVar2 < 0x91dc718) {
      if (iVar2 == -0x63176d3) goto LAB_016cff48;
      iVar4 = 0x68001ae;
    }
    else {
      if (iVar2 == 0x91dc718) goto LAB_016cff48;
      iVar4 = 0x1a13a2ea;
    }
  }
  else if (iVar2 < 0x340da5a5) {
    if (iVar2 < 0x2aefed47) {
      if (iVar2 == 0x25b43b89) goto LAB_016cff48;
      iVar4 = 0x2633946a;
    }
    else {
      if (iVar2 == 0x2aefed47) goto LAB_016cff48;
      iVar4 = 0x302056e3;
    }
  }
  else if (iVar2 < 0x6043fd87) {
    if (iVar2 == 0x340da5a5) goto LAB_016cff48;
    iVar4 = 0x356323a8;
  }
  else {
    if (iVar2 == 0x7dfa9ed2) goto LAB_016cff48;
    iVar4 = 0x6043fd87;
  }
  if (iVar2 != iVar4) {
    return false;
  }
LAB_016cff48:
  if (DAT_0523adf0 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(ulong *)(DAT_0523adf0 + 8) < 0xffffffff00000000;
    *param_1 = *(ulong *)(DAT_0523adf0 + 8);
  }
  return bVar1;
}

