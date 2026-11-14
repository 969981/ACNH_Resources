
bool FUN_016cf9f0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_05aed670 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar2 + 7);
  return ((((((((((((((iVar1 == -0xe5efd5a || iVar1 == 0x340da5a5) || iVar1 == 0x356323a8) ||
                    iVar1 == -0x214773f9) || iVar1 == 0x2aefed47) || iVar1 == 0x1a13a2ea) ||
                 iVar1 == 0x91dc718) || iVar1 == -0x7a4d7ddc) || iVar1 == 0x6043fd87) ||
              iVar1 == 0x2633946a) || iVar1 == 0x68001ae) || iVar1 == 0x302056e3) ||
           iVar1 == -0x63176d3) || iVar1 == 0x7dfa9ed2) || iVar1 == 0x25b43b89) ||
         iVar1 == -0x3e25491c;
}

