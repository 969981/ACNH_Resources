
void FUN_03133694(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_50;
  undefined4 local_48;
  
  *(int *)(param_1 + 0x270) = param_2;
  if (*(long *)(param_1 + 600) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 600) + 8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x268) == 0) {
    return;
  }
  fVar5 = 0.0;
  switch(*(int *)(param_1 + 0x268)) {
  case 1:
    if (DAT_056f6cb8 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6cbc == param_2) {
LAB_03134340:
      fVar5 = 1.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cc0 == param_2) {
LAB_0313499c:
      fVar5 = 2.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cc4 == param_2) {
LAB_031349d4:
      fVar5 = 3.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cc8 == param_2) {
LAB_03134a0c:
      fVar5 = 4.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6ccc == param_2) {
LAB_03134a44:
      fVar5 = 5.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cd0 == param_2) {
LAB_031341f0:
      fVar5 = 6.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cd4 == param_2) {
LAB_03134ac0:
      fVar5 = 7.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cd8 == param_2) {
LAB_03134af8:
      fVar5 = 8.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6cdc == param_2) goto LAB_03134b30;
    if (DAT_056f6ce0 == param_2) {
LAB_03134b68:
      fVar5 = 10.0;
      goto switchD_031336fc_default;
    }
    fVar5 = 11.0;
    iVar2 = DAT_056f6ce4;
    break;
  case 2:
    if (DAT_056f6ce8 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6cec == param_2) goto LAB_03134340;
    if (DAT_056f6cf0 == param_2) goto LAB_0313499c;
    if (DAT_056f6cf4 == param_2) goto LAB_031349d4;
    if (DAT_056f6cf8 == param_2) goto LAB_03134a0c;
    if (DAT_056f6cfc == param_2) goto LAB_03134a44;
    if (DAT_056f6d00 == param_2) goto LAB_031341f0;
    if (DAT_056f6d04 == param_2) goto LAB_03134ac0;
    if (DAT_056f6d08 == param_2) goto LAB_03134af8;
    if (DAT_056f6d0c == param_2) goto LAB_03134b30;
    if (DAT_056f6d10 == param_2) goto LAB_03134b68;
    if (DAT_056f6d14 == param_2) {
LAB_03134ba0:
      fVar5 = 11.0;
      goto switchD_031336fc_default;
    }
    fVar5 = 12.0;
    iVar2 = DAT_056f6d18;
    break;
  case 3:
    if (DAT_056f6d1c == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d20 == param_2) goto LAB_03134340;
    if (DAT_056f6d24 == param_2) goto LAB_0313499c;
    if (DAT_056f6d28 == param_2) goto LAB_031349d4;
    if (DAT_056f6d2c == param_2) goto LAB_03134a0c;
    if (DAT_056f6d30 == param_2) goto LAB_03134a44;
    if (DAT_056f6d34 == param_2) goto LAB_031341f0;
    if (DAT_056f6d38 == param_2) goto LAB_03134ac0;
    if (DAT_056f6d3c == param_2) goto LAB_03134af8;
    if (DAT_056f6d40 == param_2) goto LAB_03134b30;
    iVar2 = DAT_056f6d44;
LAB_03133c84:
    fVar5 = 10.0;
    break;
  case 4:
    if (DAT_056f6d48 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d4c == param_2) goto LAB_03134340;
    iVar2 = DAT_056f6d50;
    goto LAB_031348c0;
  case 5:
    if (DAT_056f6d54 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d58 == param_2) goto LAB_03134340;
    if (DAT_056f6d5c == param_2) goto LAB_0313499c;
    if (DAT_056f6d60 == param_2) goto LAB_031349d4;
    iVar2 = DAT_056f6d64;
    goto LAB_03134844;
  case 6:
    if (DAT_056f6d68 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d6c == param_2) goto LAB_03134340;
    if (DAT_056f6d70 == param_2) goto LAB_0313499c;
    if (DAT_056f6d74 == param_2) goto LAB_031349d4;
    if (DAT_056f6d78 == param_2) goto LAB_03134a0c;
    iVar2 = DAT_056f6d7c;
    goto LAB_03134a54;
  case 7:
    if (DAT_056f6d80 == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f6d84;
    goto LAB_03134874;
  case 8:
    if (DAT_056f6d88 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d8c == param_2) goto LAB_03134340;
    if (DAT_056f6d90 == param_2) goto LAB_0313499c;
    iVar2 = DAT_056f6d94;
    goto LAB_031346c4;
  case 9:
    if (DAT_056f6d98 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6d9c == param_2) goto LAB_03134340;
    if (DAT_056f6da0 == param_2) goto LAB_0313499c;
    if (DAT_056f6da4 == param_2) goto LAB_031349d4;
    iVar2 = DAT_056f6da8;
    goto LAB_03134844;
  case 10:
    if (DAT_056f6dac == param_2) goto switchD_031336fc_default;
    if (DAT_056f6db0 == param_2) goto LAB_03134340;
    if (DAT_056f6db4 == param_2) goto LAB_0313499c;
    if (DAT_056f6db8 == param_2) goto LAB_031349d4;
    if (DAT_056f6dbc == param_2) goto LAB_03134a0c;
    if (DAT_056f6dc0 == param_2) goto LAB_03134a44;
    if (DAT_056f6dc4 == param_2) goto LAB_031341f0;
    if (DAT_056f6dc8 == param_2) goto LAB_03134ac0;
    if (DAT_056f6dcc == param_2) goto LAB_03134af8;
    if (DAT_056f6dd0 != param_2) {
      iVar2 = DAT_056f6dd4;
      goto LAB_03133c84;
    }
    goto LAB_03134b30;
  case 0xb:
    if (DAT_056f6dd8 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6ddc == param_2) goto LAB_03134340;
    if (DAT_056f6de0 == param_2) goto LAB_0313499c;
    if (DAT_056f6de4 == param_2) goto LAB_031349d4;
    if (DAT_056f6de8 == param_2) goto LAB_03134a0c;
    if (DAT_056f6dec == param_2) goto LAB_03134a44;
    if (DAT_056f6df0 == param_2) goto LAB_031341f0;
    if (DAT_056f6df4 == param_2) goto LAB_03134ac0;
    fVar5 = 8.0;
    iVar2 = DAT_056f6df8;
    break;
  case 0xc:
    if (DAT_056f6dfc == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e00 == param_2) goto LAB_03134340;
    if (DAT_056f6e04 == param_2) goto LAB_0313499c;
    iVar2 = DAT_056f6e08;
    goto LAB_031346c4;
  case 0xd:
    if (DAT_056f6e0c == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e10 == param_2) goto LAB_03134340;
    if (DAT_056f6e14 == param_2) goto LAB_0313499c;
    if (DAT_056f6e18 == param_2) goto LAB_031349d4;
    if (DAT_056f6e1c == param_2) goto LAB_03134a0c;
    iVar2 = DAT_056f6e20;
    goto LAB_03134a54;
  case 0xe:
    if (DAT_056f6e24 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e28 == param_2) goto LAB_03134340;
    if (DAT_056f6e2c == param_2) goto LAB_0313499c;
    if (DAT_056f6e30 == param_2) goto LAB_031349d4;
    if (DAT_056f6e34 == param_2) goto LAB_03134a0c;
    if (DAT_056f6e38 == param_2) goto LAB_03134a44;
    if (DAT_056f6e3c == param_2) goto LAB_031341f0;
    if (DAT_056f6e40 == param_2) goto LAB_03134ac0;
    if (DAT_056f6e44 == param_2) goto LAB_03134af8;
    if (DAT_056f6e48 != param_2) {
      if (DAT_056f6e4c == param_2) goto LAB_03134b68;
      if (DAT_056f6e50 == param_2) goto LAB_03134ba0;
      if (DAT_056f6e54 == param_2) {
LAB_03134bd8:
        fVar5 = 12.0;
        goto switchD_031336fc_default;
      }
      iVar2 = DAT_056f6e58;
      goto LAB_03134c98;
    }
    goto LAB_03134b30;
  case 0xf:
    if (DAT_056f6e84 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e88 == param_2) goto LAB_03134340;
    iVar2 = DAT_056f6e8c;
    goto LAB_031348c0;
  case 0x10:
    if (DAT_056f6e90 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e94 == param_2) goto LAB_03134340;
    if (DAT_056f6e98 == param_2) goto LAB_0313499c;
    if (DAT_056f6e9c == param_2) goto LAB_031349d4;
    iVar2 = DAT_056f6ea0;
    goto LAB_03134844;
  case 0x11:
    if (DAT_056f6ea4 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6ea8 == param_2) goto LAB_03134340;
    if (DAT_056f6eac == param_2) goto LAB_0313499c;
    if (DAT_056f6eb0 == param_2) goto LAB_031349d4;
    if (DAT_056f6eb4 == param_2) goto LAB_03134a0c;
    if (DAT_056f6eb8 == param_2) goto LAB_03134a44;
    fVar5 = 6.0;
    iVar2 = DAT_056f6ebc;
    break;
  case 0x12:
    if (DAT_056f6e5c == param_2) goto switchD_031336fc_default;
    if (DAT_056f6e60 == param_2) goto LAB_03134340;
    if (DAT_056f6e64 == param_2) goto LAB_0313499c;
    if (DAT_056f6e68 == param_2) goto LAB_031349d4;
    if (DAT_056f6e6c == param_2) goto LAB_03134a0c;
    if (DAT_056f6e70 == param_2) goto LAB_03134a44;
    if (DAT_056f6e74 == param_2) goto LAB_031341f0;
    if (DAT_056f6e78 == param_2) goto LAB_03134ac0;
    if (DAT_056f6e7c == param_2) goto LAB_03134af8;
    fVar5 = 9.0;
    iVar2 = DAT_056f6e80;
    break;
  case 0x13:
    if (DAT_056f6ec0 == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f6ec4;
    goto LAB_03134874;
  case 0x14:
    if (DAT_056f6ec8 == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f6ecc;
    goto LAB_03134874;
  case 0x15:
    if (DAT_056f6ed0 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6ed4 == param_2) goto LAB_03134340;
    if (DAT_056f6ed8 == param_2) goto LAB_0313499c;
    if (DAT_056f6edc == param_2) goto LAB_031349d4;
    if (DAT_056f6ee0 == param_2) goto LAB_03134a0c;
    if (DAT_056f6ee4 == param_2) goto LAB_03134a44;
    if (DAT_056f6ee8 == param_2) goto LAB_031341f0;
    if (DAT_056f6eec == param_2) goto LAB_03134ac0;
    if (DAT_056f6ef0 == param_2) goto LAB_03134af8;
    if (DAT_056f6ef4 != param_2) {
      if (DAT_056f6ef8 == param_2) goto LAB_03134b68;
      if (DAT_056f6efc == param_2) goto LAB_03134ba0;
      if (DAT_056f6f00 == param_2) goto LAB_03134bd8;
      iVar2 = DAT_056f6f04;
      goto LAB_03134c98;
    }
LAB_03134b30:
    fVar5 = 9.0;
    goto switchD_031336fc_default;
  case 0x16:
    if (DAT_056f6f08 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f0c == param_2) goto LAB_03134340;
    if (DAT_056f6f10 == param_2) goto LAB_0313499c;
    if (DAT_056f6f14 == param_2) goto LAB_031349d4;
    iVar2 = DAT_056f6f18;
    goto LAB_03134844;
  case 0x17:
    if (DAT_056f6f1c == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f20 == param_2) goto LAB_03134340;
    if (DAT_056f6f24 == param_2) goto LAB_0313499c;
    if (DAT_056f6f28 == param_2) goto LAB_031349d4;
    if (DAT_056f6f2c == param_2) goto LAB_03134a0c;
    iVar2 = DAT_056f6f30;
    goto LAB_03134a54;
  case 0x18:
    if (DAT_056f6f34 == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f6f38;
    goto LAB_03134874;
  case 0x19:
    if (DAT_056f6f3c == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f6f40;
    goto LAB_03134874;
  case 0x1a:
    if (DAT_056f6f44 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f48 == param_2) goto LAB_03134340;
    if (DAT_056f6f4c == param_2) goto LAB_0313499c;
    if (DAT_056f6f50 == param_2) goto LAB_031349d4;
    if (DAT_056f6f54 == param_2) goto LAB_03134a0c;
    if (DAT_056f6f58 == param_2) goto LAB_03134a44;
    if (DAT_056f6f5c == param_2) {
LAB_03134aa4:
      fVar5 = 6.0;
      goto switchD_031336fc_default;
    }
    iVar2 = DAT_056f6f60;
    goto LAB_03134a80;
  case 0x1b:
    if (DAT_056f6f64 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f68 == param_2) {
LAB_03134980:
      fVar5 = 1.0;
      goto switchD_031336fc_default;
    }
    iVar2 = DAT_056f6f6c;
LAB_031348c0:
    fVar5 = 2.0;
    break;
  case 0x1c:
    if (DAT_056f6f70 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f74 == param_2) goto LAB_03134980;
    if (DAT_056f6f78 == param_2) {
LAB_031349b8:
      fVar5 = 2.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6f7c == param_2) {
LAB_031349f0:
      fVar5 = 3.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6f80 == param_2) {
LAB_03134a28:
      fVar5 = 4.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6f84 == param_2) {
LAB_0313494c:
      fVar5 = 5.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6f88 == param_2) goto LAB_03134aa4;
    iVar2 = DAT_056f6f8c;
LAB_03134a80:
    fVar5 = 7.0;
    break;
  case 0x1d:
    if (DAT_056f6f90 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6f94 == param_2) goto LAB_03134980;
    if (DAT_056f6f98 == param_2) goto LAB_031349b8;
    if (DAT_056f6f9c == param_2) goto LAB_031349f0;
    if (DAT_056f6fa0 == param_2) goto LAB_03134a28;
    if (DAT_056f6fa4 == param_2) goto LAB_0313494c;
    if (DAT_056f6fa8 == param_2) goto LAB_03134aa4;
    if (DAT_056f6fac == param_2) {
LAB_03134adc:
      fVar5 = 7.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fb0 == param_2) {
LAB_03134b14:
      fVar5 = 8.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fb4 == param_2) {
LAB_03134b4c:
      fVar5 = 9.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fb8 == param_2) {
LAB_03134b84:
      fVar5 = 10.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fbc == param_2) {
LAB_03134bbc:
      fVar5 = 11.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fc0 == param_2) {
LAB_03134bf4:
      fVar5 = 12.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fc4 == param_2) {
      fVar5 = 13.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fc8 == param_2) {
      fVar5 = 14.0;
      goto switchD_031336fc_default;
    }
    if (DAT_056f6fcc == param_2) {
      fVar5 = 15.0;
      goto switchD_031336fc_default;
    }
    fVar5 = 16.0;
    iVar2 = DAT_056f6fd0;
    break;
  case 0x1e:
    if (DAT_056f6fd4 == param_2) goto switchD_031336fc_default;
    if (DAT_056f6fd8 == param_2) goto LAB_03134980;
    if (DAT_056f6fdc == param_2) goto LAB_031349b8;
    if (DAT_056f6fe0 == param_2) goto LAB_031349f0;
    if (DAT_056f6fe4 == param_2) goto LAB_03134a28;
    iVar2 = DAT_056f6fe8;
LAB_03134a54:
    fVar5 = 5.0;
    break;
  case 0x1f:
    if (DAT_056f6fec == param_2) goto switchD_031336fc_default;
    if (DAT_056f6ff0 == param_2) goto LAB_03134980;
    if (DAT_056f6ff4 == param_2) goto LAB_031349b8;
    iVar2 = DAT_056f6ff8;
    goto LAB_031346c4;
  case 0x20:
    if (DAT_056f6ffc == param_2) goto switchD_031336fc_default;
    if (DAT_056f7000 == param_2) goto LAB_03134980;
    if (DAT_056f7004 == param_2) goto LAB_031349b8;
    if (DAT_056f7008 == param_2) goto LAB_031349f0;
    if (DAT_056f700c == param_2) goto LAB_03134a28;
    if (DAT_056f7010 == param_2) goto LAB_0313494c;
    if (DAT_056f7014 == param_2) goto LAB_03134aa4;
    if (DAT_056f7018 == param_2) goto LAB_03134adc;
    if (DAT_056f701c == param_2) goto LAB_03134b14;
    if (DAT_056f7020 == param_2) goto LAB_03134b4c;
    if (DAT_056f7024 == param_2) goto LAB_03134b84;
    if (DAT_056f7028 == param_2) goto LAB_03134bbc;
    if (DAT_056f702c == param_2) goto LAB_03134bf4;
    iVar2 = DAT_056f7030;
    goto LAB_03134c98;
  case 0x21:
    if (DAT_056f7034 == param_2) goto switchD_031336fc_default;
    if (DAT_056f7038 == param_2) goto LAB_03134980;
    if (DAT_056f703c == param_2) goto LAB_031349b8;
    if (DAT_056f7040 == param_2) goto LAB_031349f0;
    if (DAT_056f7044 == param_2) goto LAB_03134a28;
    if (DAT_056f7048 == param_2) goto LAB_0313494c;
    if (DAT_056f704c == param_2) goto LAB_03134aa4;
    if (DAT_056f7050 == param_2) goto LAB_03134adc;
    if (DAT_056f7054 == param_2) goto LAB_03134b14;
    if (DAT_056f7058 == param_2) goto LAB_03134b4c;
    if (DAT_056f705c == param_2) goto LAB_03134b84;
    if (DAT_056f7060 == param_2) goto LAB_03134bbc;
    if (DAT_056f7064 == param_2) goto LAB_03134bf4;
    iVar2 = DAT_056f7068;
    goto LAB_03134c98;
  case 0x22:
    if (DAT_056f706c == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f7070;
    goto LAB_03134874;
  case 0x23:
    if (DAT_056f7074 == param_2) goto switchD_031336fc_default;
    if (DAT_056f7078 == param_2) goto LAB_03134980;
    if (DAT_056f707c == param_2) goto LAB_031349b8;
    iVar2 = DAT_056f7080;
LAB_031346c4:
    fVar5 = 3.0;
    break;
  case 0x24:
    if (DAT_056f7084 == param_2) goto switchD_031336fc_default;
    if (DAT_056f7088 == param_2) goto LAB_03134980;
    if (DAT_056f708c == param_2) goto LAB_031349b8;
    if (DAT_056f7090 == param_2) goto LAB_031349f0;
    if (DAT_056f7094 == param_2) goto LAB_03134a28;
    if (DAT_056f7098 == param_2) goto LAB_0313494c;
    if (DAT_056f709c == param_2) goto LAB_03134aa4;
    if (DAT_056f70a0 == param_2) goto LAB_03134adc;
    if (DAT_056f70a4 == param_2) goto LAB_03134b14;
    if (DAT_056f70a8 == param_2) goto LAB_03134b4c;
    if (DAT_056f70ac == param_2) goto LAB_03134b84;
    if (DAT_056f70b0 == param_2) goto LAB_03134bbc;
    if (DAT_056f70b4 == param_2) goto LAB_03134bf4;
    iVar2 = DAT_056f70b8;
LAB_03134c98:
    fVar5 = 13.0;
    break;
  case 0x25:
    if (DAT_056f70bc == param_2) goto switchD_031336fc_default;
    if (DAT_056f70c0 == param_2) goto LAB_03134980;
    if (DAT_056f70c4 == param_2) goto LAB_031349b8;
    if (DAT_056f70c8 == param_2) goto LAB_031349f0;
    iVar2 = DAT_056f70cc;
LAB_03134844:
    fVar5 = 4.0;
    break;
  case 0x26:
    if (DAT_056f70d0 == param_2) goto switchD_031336fc_default;
    iVar2 = DAT_056f70d4;
LAB_03134874:
    fVar5 = 1.0;
    break;
  default:
    goto switchD_031336fc_default;
  }
  if (iVar2 != param_2) {
    fVar5 = 0.0;
  }
switchD_031336fc_default:
  plVar3 = *(long **)(param_1 + 600);
  puVar1 = PTR_DAT_04bc4f00 + 0x10;
  local_48 = 9;
  local_50 = puVar1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  fVar4 = (float)(**(code **)(plVar3[3] + 0xb0))(plVar3[1]);
  plVar3 = *(long **)(param_1 + 600);
  local_48 = 0x14;
  fVar6 = 0.0;
  if (fVar5 <= fVar4) {
    fVar6 = fVar5;
  }
  local_50 = puVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  (**(code **)(plVar3[3] + 0x158))(fVar6,plVar3[1]);
  return;
}

