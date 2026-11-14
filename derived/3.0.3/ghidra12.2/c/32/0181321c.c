
undefined8 FUN_0181321c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 0x50) & 0xfffffffe) == 2) {
    lVar6 = param_1[0x7a];
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
      bVar3 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
        uVar7 = (long)(char)bVar3 & 0xffffffff;
        pbVar2 = pbVar1 + uVar7 * 0x80;
        if (7 < bVar3) {
          pbVar2 = pbVar1;
        }
        if ((*pbVar2 >> 3 & 1) != 0) {
          lVar6 = DAT_0537d558[2] + 0x108 + uVar7 * 0xc;
          if (0xb < bVar3) {
            lVar6 = DAT_0537d558[2] + 0x108;
          }
          if (*(char *)(lVar6 + 10) == '\0') {
            local_8 = 0;
            if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
               (*(char *)(DAT_04cfae30 + 0x11c8) == '\0')) {
              FUN_0093a950(DAT_04cfae30 + 0x28,param_1[0x60] + 0x278,&local_8);
            }
            local_4 = local_8;
            lVar6 = FUN_009807cc(DAT_04cfab78 + 8,local_8);
            if (((lVar6 == 0) ||
                (pcVar5 = (char *)FUN_009823a0(lVar6,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10)
                , pcVar5 == (char *)0x0)) || (*pcVar5 == '\0')) goto LAB_01813344;
          }
        }
      }
    }
    uVar4 = 2;
  }
  else {
LAB_01813344:
    uVar4 = (**(code **)(*param_1 + 0x248))(param_1);
  }
  return uVar4;
}

