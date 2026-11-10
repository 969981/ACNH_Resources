
void FUN_002aef44(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int local_640;
  ErrorResultVariant aEStack_63c [12];
  undefined8 local_630;
  undefined8 local_628;
  byte local_620;
  uint auStack_61c [362];
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  piVar9 = &local_640;
  if ((((int)param_2[0xc9] == DAT_0411003c) || (param_2[0xcb] == 0)) || (param_2[1] == 0)) {
    local_74 = 0;
    local_630 = (undefined *)CONCAT44(local_630._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_630 + 4),(Result *)&local_74);
    piVar9 = (int *)&local_630;
    goto LAB_002af004;
  }
  if ((*(byte *)((long)param_3 + 0x29) >> 5 & 1) == 0) {
    bVar2 = *(byte *)(param_3 + 5);
    uVar12 = (uint)*(ushort *)((long)param_3 + 0x2a);
    uVar10 = 1;
    if ((bVar2 & 1) != 0) {
      uVar10 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar10 = uVar10 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar10 = uVar10 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar10 = uVar10 + 8;
    }
    lVar11 = *param_3 + (ulong)uVar10;
LAB_002af088:
    local_630 = PTR_DAT_04bce080 + 0x10;
    memset(auStack_61c,0,4);
    local_628 = 0;
    local_620 = 0;
    memset(auStack_61c,0,4);
    FUN_002a6cdc(&local_74,&local_630,lVar11,uVar12);
    lVar13 = param_2[0xa7];
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xa8];
    uVar10 = 0;
    if (lVar13 != lVar5) {
      uVar10 = 0xfffffffd;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xa9];
    if (lVar14 == lVar5) {
      uVar10 = 1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xaa];
    uVar1 = 2;
    if (lVar13 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xab];
    uVar10 = 3;
    if (lVar14 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    uVar1 = 4;
    if (lVar13 != lVar5) {
      uVar1 = uVar10;
    }
    lVar13 = param_2[0xac];
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xad];
    uVar10 = 5;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xae];
    uVar1 = 6;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xaf];
    uVar10 = 7;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xb0];
    uVar1 = 8;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xb1];
    uVar10 = 9;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xb2];
    uVar1 = 10;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xb3];
    uVar10 = 0xb;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xb4];
    uVar1 = 0xc;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xb5];
    uVar10 = 0xd;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xb6];
    uVar1 = 0xe;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xb7];
    uVar10 = 0xf;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xb8];
    uVar1 = 0x10;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xb9];
    uVar10 = 0x11;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xba];
    uVar1 = 0x12;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xbb];
    uVar10 = 0x13;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xbc];
    uVar1 = 0x14;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xbd];
    uVar10 = 0x15;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xbe];
    uVar1 = 0x16;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xbf];
    uVar10 = 0x17;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xc0];
    uVar1 = 0x18;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xc1];
    uVar10 = 0x19;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xc2];
    uVar1 = 0x1a;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xc3];
    uVar10 = 0x1b;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xc4];
    uVar1 = 0x1c;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar14 = param_2[0xc5];
    uVar10 = 0x1d;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    lVar5 = FUN_002abe54(param_3);
    lVar13 = param_2[0xc6];
    uVar1 = 0x1e;
    if (lVar14 != lVar5) {
      uVar1 = uVar10;
    }
    lVar5 = FUN_002abe54(param_3);
    uVar10 = 0x1f;
    if (lVar13 != lVar5) {
      uVar10 = uVar1;
    }
    uVar6 = FUN_002abe54(param_3);
    uVar7 = FUN_002aee28(param_2,uVar6);
    if ((uVar7 & 1) != 0) {
      uVar1 = local_620 + 0x1f >> 3 & 0x3c;
      if (((uint)local_628._2_2_ <= 0x597 - uVar1) && (uVar12 == local_628._2_2_ + uVar1 + 9)) {
        cVar4 = local_628._1_1_;
        lVar5 = (**(code **)(*param_2 + 0x40))(param_2,uVar10);
        if ((cVar4 == *(char *)(lVar5 + 0x1e)) &&
           ((local_620 == 0 ||
            ((*(uint *)((long)auStack_61c + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c)) >>
              (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 1) != 0)))) {
          uVar6 = (**(code **)(*param_2 + 0x40))(param_2,uVar10);
          FUN_002af630(uVar6,local_628._6_2_);
        }
        local_640 = 0;
        local_74 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_63c,(Result *)&local_74);
        FUN_002296c4(&local_74,&local_640);
        if (((byte)local_628 >> 5 & 1) == 0) {
          if (((byte)local_628 >> 6 & 1) == 0) {
            if ((local_628 & 1) == 0) {
              (**(code **)(*param_2 + 0x68))(&local_640,param_2,lVar11,&local_630,uVar10);
            }
            else {
              FUN_002af910(&local_640,param_2,lVar11,&local_630,uVar10);
            }
            FUN_00229780(&local_74,&local_640);
          }
          else {
            FUN_002af8c0(param_2,&local_630,uVar10);
          }
        }
        else {
          FUN_002af7d8(param_2,&local_630,uVar10);
        }
        if (local_74 == 0) {
          lVar11 = param_2[0xd3];
          if (((int)lVar11 != 0) &&
             (uVar7 = FUN_002afc10(param_2,*(undefined2 *)((long)param_2 + 0x69c)), (uVar7 & 1) != 0
             )) {
            if ((uVar10 & 0xff) < 4) {
              lVar5 = (ulong)(byte)uVar10 * 4;
              *(int *)(lVar5 + 0x4c60220) = (int)lVar11;
              lVar13 = param_2[0xd4];
              lVar11 = **(long **)PTR_DAT_04bc1510;
              plVar8 = (long *)FUN_00228380();
              uVar3 = 0;
              if (*plVar8 != 0) {
                uVar3 = (undefined4)((lVar11 - lVar13) / *plVar8);
              }
              *(undefined4 *)(lVar5 + 0x4c60230) = uVar3;
            }
            *(undefined4 *)(param_2 + 0xd3) = 0;
            param_2[0xd4] = 0;
            *(undefined2 *)((long)param_2 + 0x69c) = 0xffff;
          }
          local_640 = 0;
          local_64 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_63c,(Result *)&local_64);
        }
        else {
          piVar9 = &local_74;
        }
        goto LAB_002af004;
      }
      goto LAB_002af4e0;
    }
    local_74 = 0x10c08;
  }
  else {
    bVar2 = *(byte *)(param_3 + 5);
    uVar12 = 1;
    if ((bVar2 & 1) != 0) {
      uVar12 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar12 = uVar12 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar12 = uVar12 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar12 = uVar12 + 8;
    }
    FUN_002a8710(&local_630,param_2[0xcb],*param_3 + (ulong)uVar12,
                 *(undefined2 *)((long)param_3 + 0x2a));
    if ((int)local_630 == 0) {
      lVar11 = *(long *)(param_2[0xcb] + 0xe8);
      uVar12 = *(uint *)(param_2[0xcb] + 0xf0);
      goto LAB_002af088;
    }
LAB_002af4e0:
    local_74 = 0x2c03;
  }
  local_640 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_640);
  piVar9 = &local_74;
LAB_002af004:
  FUN_002296c4(param_1,piVar9);
  return;
}

